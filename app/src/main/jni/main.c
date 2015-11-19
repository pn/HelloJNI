#include "com_example_hellojni_MainActivity.h"
/* Header for class com_example_hellojni_MainActivity */

JNIEXPORT jstring JNICALL Java_com_example_hellojni_MainActivity_helloFromJni
        (JNIEnv *env, jobject obj)
{
    return (*env)->NewStringUTF(env, "Hello from JNI!");
}
