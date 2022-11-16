"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 11/16/2022-12:37.
Please do not change it manually.
"""
import functools
import importlib
import inspect
import re

__all__ = ['bind']


class Function:
    """
    Function is a wrap over standard python function.
    """

    def __init__(self, original_function, is_overloaded=False):
        self.original_function = original_function
        self.is_overloaded = is_overloaded
        self.__init_args_signature()
        self.__init_default_args()
        self.__init_optionals()
        self.__pybind_module = None
        self.__is_property = None

    def __init_args_signature(self):
        signature = inspect.getfullargspec(self.original_function)
        annotations = signature.annotations
        args_names = signature.args
        if 'self' in args_names:
            args_names.remove('self')
        if 'cls' in args_names:
            args_names.remove('cls')
        self.args_names = args_names
        self.annotations = annotations

    def __init_optionals(self):
        self.optionals = set()
        for arg_name, type_hint in self.annotations.items():
            if type_hint.startswith("Optional["):
                self.optionals.add(arg_name)

    def __init_default_args(self):
        signature = inspect.signature(self.original_function)
        self.defaults = {
            k: v.default
            for k, v in signature.parameters.items()
            if v.default is not inspect.Parameter.empty
        }

    @property
    def is_function(self):
        return self.classname is None

    @property
    def is_property(self):
        if self.__is_property is None:
            if self.classname is None:
                self.__is_property = False
                return False
            # on pybind side we do not have nested types using the last part of cppbind's type full name
            parent = getattr(self.pybind_module, f'{self.classname.split(".")[-1]}')
            self.__is_property = isinstance(getattr(parent, self.name), property)
        return self.__is_property

    @property
    def pybind_module(self):
        if self.__pybind_module is None:
            # loads pybind module which should be imported in corresponding cppbind module
            module_name = f'pybind_{self.original_function.__module__.split(".")[-1]}'
            self.__pybind_module = getattr(importlib.import_module(self.original_function.__module__),
                                           module_name,
                                           None)
            if self.__pybind_module is None:
                raise ImportError(
                    f'Could not load corresponding pybind module for: {self.original_function.__module__}')

        return self.__pybind_module

    def validate_arg_value(self, arg_name, arg_value):
        if arg_value is None and arg_name not in self.optionals:
            raise ValueError(f'{self.classname}.{self.name}\'s {arg_name} argument cannot be None.')

    def validate_return_value(self, value):
        if 'return' in self.annotations:
            # for void functions return type hint is 'None' so returning None is correct
            if value is None and self.annotations['return'] != 'None' and 'return' not in self.optionals:
                raise ValueError(f'{self.classname}.{self.name}\'s return value cannot be None.')

    @property
    def classname(self):
        # for global functions __qualname__ is only the function name
        if '.' not in self.original_function.__qualname__:
            return None
        # for methods __qualname__ is <OuterClassName>.<InnerClassName>.<FunctionName>
        return self.original_function.__qualname__.rsplit('.', 1)[0]

    @property
    def name(self):
        return self.original_function.__name__


class Namespace:
    """
    Namespace is the singleton class that is responsible
    for holding all the functions.
    """
    __instance = None

    def __init__(self):
        if self.__instance is None:
            self.function_map = dict()
            Namespace.__instance = self
        else:
            raise Exception("cannot instantiate a virtual Namespace again")

    @staticmethod
    def get_instance():
        if Namespace.__instance is None:
            Namespace()
        return Namespace.__instance

    @staticmethod
    def _key(fn):
        """
        Returns the tuple of module+name and signature of the function.
        """

        signature = str(inspect.signature(fn))
        # fn is a function not a method to get it´s class name using __qualname__
        classname = fn.__qualname__.split('.')[0]
        return (fn.__module__ + classname + fn.__name__,
                signature)

    def register(self, fn):
        """
        registers the function in the virtual namespace and returns
        an instance of callable Function that wraps the
        function fn.
        """
        key = self._key(fn)
        name, signature = key
        func = Function(fn)
        if name not in self.function_map:
            self.function_map[name] = {signature: func}
        else:
            overloads = self.overloads_signature(fn)
            setattr(func.original_function, '__doc__', f'{func.original_function.__doc__}\nOverloads:\n\t{overloads}')
            func.is_overloaded = True
            self.function_map[name][signature] = func

        return func

    def get(self, fn):
        """
        Returns the matching function from the virtual namespace.

        return None if it did not fund any matching function.
        """
        key = self._key(fn)
        name, signature = key
        return self.function_map.get(name).get(signature)

    def overloads_signature(self, fn):
        """
        Returns overloaded options string if the function is overloaded and an empty string otherwise.
        """
        key = self._key(fn)
        name = key[0]
        overloads = self.function_map.get(name)
        signatures = []
        if len(overloads) > 1:
            for s in overloads:
                signatures.append(fn.__name__ + s)

        return '\n\t'.join(signatures)


class bind:
    """
    Decorator which is responsible for binding wrapper classes and functions with actual pybind classes and functions.
    For overloaded method it appends the overloaded options to it´s docstring.
    """

    def __init__(self, fn):
        namespace = Namespace.get_instance()
        self.fn = namespace.register(fn)
        # for instance methods
        functools.update_wrapper(self, self.fn.original_function)
        self.cls = None

    def __get__(self, instance, owner):
        """Support instance methods."""

        @functools.wraps(self.fn.original_function)
        def _decorator(*args, **kwargs):
            # when calling __init__ like Test.__init__(self) then instance is None and self is passed as an argument
            _instance = instance or args[0]
            all_args = args[1:] if instance is None else args
            all_kwargs = kwargs
            if not self.fn.is_overloaded:
                # we cannot validate arguments when the method is overloaded
                all_args, all_kwargs = self.__validate_and_convert_args_kwargs(self.fn, *all_args, **kwargs)
            original = getattr(self.fn.original_function, self.fn.name)
            if inspect.isclass(instance):
                # for python >= 3.9
                # case of static method, e.g decorated with @classmethod
                result = original(*all_args, **all_kwargs)
            else:
                result = original(_instance, *all_args, **all_kwargs)
            self.fn.validate_return_value(result)
            return result

        return _decorator

    def __set_name__(self, owner, name):
        # set methods class
        self.name = name
        self.cls = owner

    def __call__(self, *args, **kwargs):
        """
        This is called when a function is decorated with this decorator or a method which is already decorated with other decorators
        like properties and static methods which are already decorated with @property and @classmethod correspondingly.
        """
        if self.fn.is_function:
            # global function
            # no overloading for global functions
            original_function = getattr(self.fn.pybind_module, self.fn.name)
            all_args, all_kwargs = self.__validate_and_convert_args_kwargs(self.fn, *args, **kwargs)
            result = original_function(*all_args, **all_kwargs)
            self.fn.validate_return_value(result)
            return result

        original = getattr(self.fn.original_function, self.fn.name)
        if args and inspect.isclass(args[0]):
            # for python <= 3.8
            # case of static method, e.g decorated with @classmethod
            # update self docstring to add overload docstring
            functools.update_wrapper(self, self.fn.original_function)
            all_args = args[1:]
            all_kwargs = kwargs
            if not self.fn.is_overloaded:
                # we cannot validate arguments when the method is overloaded
                all_args, all_kwargs = self.__validate_and_convert_args_kwargs(self.fn, *all_args, **all_kwargs)
            result = original(*all_args, **all_kwargs)
            self.fn.validate_return_value(result)
            return result
        # property getter or setter
        all_args, _ = self.__validate_and_convert_args_kwargs(self.fn, *args[1:])
        result = original(args[0], *all_args)
        self.fn.validate_return_value(result)
        return result

    @staticmethod
    def __convert_arg(arg, type_hint):
        try:
            if arg is None:
                return arg
            if type_hint == 'str':
                pythontopybindarg = str(arg)
                return pythontopybindarg
            if type_hint == 'int':
                pythontopybindarg = int(arg)
                return pythontopybindarg
            if type_hint == 'float':
                pythontopybindarg = float(arg)
                return pythontopybindarg
            return arg
        except TypeError:
            raise TypeError(
                f'To cast {type(arg)} to {type_hint} please provide a __{type_hint}__ method for {type(arg)}.')

    @staticmethod
    def __validate_and_convert_args_kwargs(func, *args, **kwargs):
        annotations = func.annotations
        converted_kwargs = {}
        for k, v in kwargs.items():
            func.validate_arg_value(k, v)
            if k in annotations:
                converted_kwargs[k] = bind.__convert_arg(v, annotations[k])
            else:
                raise ValueError("Incorrect keyword argument is given: " + k)
        converted_args = []
        if len(args) + len(kwargs) > len(func.args_names):
            raise ValueError("Incorrect number of arguments are given")
        for ii, arg in enumerate(args):
            arg_name = func.args_names[ii]
            annotation = annotations[arg_name]
            func.validate_arg_value(arg_name, arg)
            converted_args.append(bind.__convert_arg(arg, annotation))

        return converted_args, converted_kwargs
