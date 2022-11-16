/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 11/16/2022-12:37.
 * Please do not change it manually.
 */

package cppbind.exceptions

import cppbind.*
import cppbind.exceptions.*

open class StdException
internal constructor(obj: CppBindObject) : AutoCloseable, Exception() {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::exception"

        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
        public fun cppbindConstructObject(id: Long, owner: Boolean = false): StdException {
            val idType = jGettypebyid(id)
            val obj : StdException
            when (idType) {
                StdDomainError.cppbindCxxTypeName -> obj = StdDomainError(CppBindObject(id, owner))
                StdInvalidArgument.cppbindCxxTypeName -> obj = StdInvalidArgument(CppBindObject(id, owner))
                StdLengthError.cppbindCxxTypeName -> obj = StdLengthError(CppBindObject(id, owner))
                StdOutOfRange.cppbindCxxTypeName -> obj = StdOutOfRange(CppBindObject(id, owner))
                StdOverflowError.cppbindCxxTypeName -> obj = StdOverflowError(CppBindObject(id, owner))
                StdRangeError.cppbindCxxTypeName -> obj = StdRangeError(CppBindObject(id, owner))
                StdUnderflowError.cppbindCxxTypeName -> obj = StdUnderflowError(CppBindObject(id, owner))
                StdBadAlloc.cppbindCxxTypeName -> obj = StdBadAlloc(CppBindObject(id, owner))
                StdBadCast.cppbindCxxTypeName -> obj = StdBadCast(CppBindObject(id, owner))
                StdBadTypeId.cppbindCxxTypeName -> obj = StdBadTypeId(CppBindObject(id, owner))
                StdLogicError.cppbindCxxTypeName -> obj = StdLogicError(CppBindObject(id, owner))
                StdRuntimeError.cppbindCxxTypeName -> obj = StdRuntimeError(CppBindObject(id, owner))
                else -> obj = StdException(CppBindObject(id, owner))
            }
            return obj
        }
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    open val cppbindObjId: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }

    /**
     * An internal property returning underlying C++ object id.
     * It is intended to be used by the generated code.
     */
    internal val cxxId: Long by lazy {
        jGetcxxid(cppbindObj.id)
    }

    /**
     * An internal property returning underlying C++ type name.
     * It is intended to be used by the generated code.
     */
    internal val cxxTypeName: String by lazy {
        jGettypebyid(cppbindObj.id)
    }
    
    open fun what(): String {
        val result = jWhat(cppbindObjId)
        val jdktokotlinresult = result!!
        return jdktokotlinresult
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
    }

    /**
     * CppBind generated equals method comparing the underlying C++ object ids.
     */
    override fun equals(other: Any?): Boolean {
        other as StdException
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
    }

    override fun close() {
        if (cppbindObj.owner && cppbindObj.id != 0L) {
            jFinalize(cppbindObj.id)
            cppbindObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jWhat(id: Long): String?
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

open class StdLogicError
internal constructor(obj: CppBindObject) : StdException(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::logic_error"

        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
        public fun cppbindConstructObject(id: Long, owner: Boolean = false): StdLogicError {
            val idType = jGettypebyid(id)
            val obj : StdLogicError
            when (idType) {
                StdDomainError.cppbindCxxTypeName -> obj = StdDomainError(CppBindObject(id, owner))
                StdInvalidArgument.cppbindCxxTypeName -> obj = StdInvalidArgument(CppBindObject(id, owner))
                StdLengthError.cppbindCxxTypeName -> obj = StdLengthError(CppBindObject(id, owner))
                StdOutOfRange.cppbindCxxTypeName -> obj = StdOutOfRange(CppBindObject(id, owner))
                else -> obj = StdLogicError(CppBindObject(id, owner))
            }
            return obj
        }
    }
    
}

open class StdRuntimeError
internal constructor(obj: CppBindObject) : StdException(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::runtime_error"

        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
        public fun cppbindConstructObject(id: Long, owner: Boolean = false): StdRuntimeError {
            val idType = jGettypebyid(id)
            val obj : StdRuntimeError
            when (idType) {
                StdOverflowError.cppbindCxxTypeName -> obj = StdOverflowError(CppBindObject(id, owner))
                StdRangeError.cppbindCxxTypeName -> obj = StdRangeError(CppBindObject(id, owner))
                StdUnderflowError.cppbindCxxTypeName -> obj = StdUnderflowError(CppBindObject(id, owner))
                else -> obj = StdRuntimeError(CppBindObject(id, owner))
            }
            return obj
        }
    }
    
}

open class StdDomainError
internal constructor(obj: CppBindObject) : StdLogicError(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::domain_error"
    }
    
}

open class StdInvalidArgument
internal constructor(obj: CppBindObject) : StdLogicError(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::invalid_argument"
    }
    
}

open class StdLengthError
internal constructor(obj: CppBindObject) : StdLogicError(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::length_error"
    }
    
}

open class StdOutOfRange
internal constructor(obj: CppBindObject) : StdLogicError(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::out_of_range"
    }
    
}

open class StdRangeError
internal constructor(obj: CppBindObject) : StdRuntimeError(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::range_error"
    }
    
}

open class StdOverflowError
internal constructor(obj: CppBindObject) : StdRuntimeError(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::overflow_error"
    }
    
}

open class StdUnderflowError
internal constructor(obj: CppBindObject) : StdRuntimeError(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::underflow_error"
    }
    
}

open class StdBadAlloc
internal constructor(obj: CppBindObject) : StdException(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::bad_alloc"
    }
    
}

open class StdBadCast
internal constructor(obj: CppBindObject) : StdException(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::bad_cast"
    }
    
}

open class StdBadTypeId
internal constructor(obj: CppBindObject) : StdException(obj) {
    companion object {
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "std::bad_typeid"
    }
    
}

private external fun jGettypebyid(id: Long): String