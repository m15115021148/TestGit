#include <com_jeanboy_demo_jnitest_NdkTest.h>
#include <jni.h>
#include <string.h>

extern "C"
/*
 * Class:     com_jeanboy_demo_jnitest_NdkTest
 * Method:    doAdd
 * Signature: (II)I
 */
JNIEXPORT jstring JNICALL Java_com_meigsmart_testjni_MainActivity_getMsg
        (JNIEnv *env, jclass type) {
    return env->NewStringUTF("你好时间");
}

JNIEXPORT jint JNICALL Java_com_meigsmart_testjni_MainActivity_onIncommingCall
        (JNIEnv *env, jclass type,jstring a,jstring b,jstring c ,jstring d,jstring t){
    return 1;
}

JNIEXPORT jint JNICALL Java_com_meigsmart_testjni_MainActivity_onAccept
        (JNIEnv *env, jclass type,jstring info){
    return 2;
}

JNIEXPORT jint JNICALL Java_com_meigsmart_testjni_MainActivity_onHangup
        (JNIEnv *env, jclass type){
    return 3;
}
