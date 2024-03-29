/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 11/16/2022-12:36.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "document_scanner/api/ios/DocumentScannerFramework/DocumentScannerFramework/Cpp/cppbind/exceptions/c_swift_std_exc_classes.h"
#include "DocumentScannerFramework/cppbind_wrapper_helper.hpp"
#include <stdexcept>
#include <new>
#include <typeinfo>


const char* CPPBIND_STD_STDEXCEPTION = "std::exception";
const char* CPPBIND_STD_STDLOGICERROR = "std::logic_error";
const char* CPPBIND_STD_STDRUNTIMEERROR = "std::runtime_error";
const char* CPPBIND_STD_STDDOMAINERROR = "std::domain_error";
const char* CPPBIND_STD_STDINVALIDARGUMENT = "std::invalid_argument";
const char* CPPBIND_STD_STDLENGTHERROR = "std::length_error";
const char* CPPBIND_STD_STDOUTOFRANGE = "std::out_of_range";
const char* CPPBIND_STD_STDRANGEERROR = "std::range_error";
const char* CPPBIND_STD_STDOVERFLOWERROR = "std::overflow_error";
const char* CPPBIND_STD_STDUNDERFLOWERROR = "std::underflow_error";
const char* CPPBIND_STD_STDBADALLOC = "std::bad_alloc";
const char* CPPBIND_STD_STDBADCAST = "std::bad_cast";
const char* CPPBIND_STD_STDBADTYPEID = "std::bad_typeid";

void release_Std_StdException(CppBindCObject cself, bool owner) {
    using namespace std;
    static_assert(std::has_virtual_destructor<std::exception>::value, "std::exception type must have virtual destructor");
    if (owner) {
        if (strcmp(cself.type, CPPBIND_STD_STDEXCEPTION) == 0)
            delete static_cast<std::exception*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDDOMAINERROR) == 0)
            delete static_cast<std::domain_error*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDINVALIDARGUMENT) == 0)
            delete static_cast<std::invalid_argument*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDLENGTHERROR) == 0)
            delete static_cast<std::length_error*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDOUTOFRANGE) == 0)
            delete static_cast<std::out_of_range*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDOVERFLOWERROR) == 0)
            delete static_cast<std::overflow_error*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDRANGEERROR) == 0)
            delete static_cast<std::range_error*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDUNDERFLOWERROR) == 0)
            delete static_cast<std::underflow_error*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDBADALLOC) == 0)
            delete static_cast<std::bad_alloc*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDBADCAST) == 0)
            delete static_cast<std::bad_cast*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDBADTYPEID) == 0)
            delete static_cast<std::bad_typeid*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDLOGICERROR) == 0)
            delete static_cast<std::logic_error*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_STD_STDRUNTIMEERROR) == 0)
            delete static_cast<std::runtime_error*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

std::exception* recover_obj_from_Std_StdException(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_STD_STDEXCEPTION) == 0)
            return static_cast<std::exception*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDDOMAINERROR) == 0)
            return static_cast<std::domain_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDINVALIDARGUMENT) == 0)
            return static_cast<std::invalid_argument*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDLENGTHERROR) == 0)
            return static_cast<std::length_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDOUTOFRANGE) == 0)
            return static_cast<std::out_of_range*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDOVERFLOWERROR) == 0)
            return static_cast<std::overflow_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDRANGEERROR) == 0)
            return static_cast<std::range_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDUNDERFLOWERROR) == 0)
            return static_cast<std::underflow_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDBADALLOC) == 0)
            return static_cast<std::bad_alloc*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDBADCAST) == 0)
            return static_cast<std::bad_cast*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDBADTYPEID) == 0)
            return static_cast<std::bad_typeid*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDLOGICERROR) == 0)
            return static_cast<std::logic_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDRUNTIMEERROR) == 0)
            return static_cast<std::runtime_error*>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

const char * _Nonnull _func_Std_StdException_what(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace std;
    std::exception* ctocxxcself = recover_obj_from_Std_StdException(cself);
    try {
        decltype(auto) result = ctocxxcself->what();
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    const char * result {};
    return result;
}

std::logic_error* recover_obj_from_Std_StdLogicError(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_STD_STDLOGICERROR) == 0)
            return static_cast<std::logic_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDDOMAINERROR) == 0)
            return static_cast<std::domain_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDINVALIDARGUMENT) == 0)
            return static_cast<std::invalid_argument*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDLENGTHERROR) == 0)
            return static_cast<std::length_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDOUTOFRANGE) == 0)
            return static_cast<std::out_of_range*>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

std::runtime_error* recover_obj_from_Std_StdRuntimeError(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_STD_STDRUNTIMEERROR) == 0)
            return static_cast<std::runtime_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDOVERFLOWERROR) == 0)
            return static_cast<std::overflow_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDRANGEERROR) == 0)
            return static_cast<std::range_error*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_STD_STDUNDERFLOWERROR) == 0)
            return static_cast<std::underflow_error*>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

