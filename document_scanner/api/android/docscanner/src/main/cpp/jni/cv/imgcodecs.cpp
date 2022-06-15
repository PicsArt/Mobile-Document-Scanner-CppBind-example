/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/09/2022-14:02.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "document_scanner/api/android/docscanner/src/main/cpp/jni/c_helpers.h"
#include "document_scanner/api/android/docscanner/src/main/cpp/jni/cppbind_wrapper_helper.hpp"
#include <opencv2/opencv.hpp>


extern const char* CPPBIND_CV_MAT;
extern const char* CPPBIND_STD_STDEXCEPTION;



extern "C" JNIEXPORT jobjectid Java_cv_ImgcodecsKt_jImread_11(JNIEnv* env, jclass cls, jstring filename, ...){
    
    jstring jjnitocxxfilenameStr = static_cast<jstring>(filename);
    auto jnitocxxfilename_cstr = env->GetStringUTFChars(jjnitocxxfilenameStr, 0);
    std::string jnitocxxfilename = jnitocxxfilename_cstr;
    env->ReleaseStringUTFChars(jjnitocxxfilenameStr, jnitocxxfilename_cstr);
    
    try {
        const auto& result = cv::imread(jnitocxxfilename);
        cv::Mat* cxxtojniresult_ptr = const_cast<cv::Mat*>(new cv::Mat(result));
        char* type_result = strdup(CPPBIND_CV_MAT);
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_cv_ImgcodecsKt_jImread(JNIEnv* env, jclass cls, jstring filename, jint flags, ...){
    
    jstring jjnitocxxfilenameStr = static_cast<jstring>(filename);
    auto jnitocxxfilename_cstr = env->GetStringUTFChars(jjnitocxxfilenameStr, 0);
    std::string jnitocxxfilename = jnitocxxfilename_cstr;
    env->ReleaseStringUTFChars(jjnitocxxfilenameStr, jnitocxxfilename_cstr);
    
    try {
        const auto& result = cv::imread(jnitocxxfilename, flags);
        cv::Mat* cxxtojniresult_ptr = const_cast<cv::Mat*>(new cv::Mat(result));
        char* type_result = strdup(CPPBIND_CV_MAT);
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_cv_ImgcodecsKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}