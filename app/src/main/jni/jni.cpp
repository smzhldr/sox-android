//
// Created by Lvlingling on 2020-01-17.
//
#include <jni.h>

extern "C" {

JNIEXPORT jstring JNICALL
Java_com_smzh_com_sox_Jni_hello(JNIEnv *env, jobject obj) {
    return env->NewStringUTF("来自C语言的返回值 哈哈哈哈");
}
}
