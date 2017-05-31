#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_fish_dreaming_runtimeexceptionmaker_1android_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    const char *bytes = NULL;
    hello.insert(2, bytes, 7);
//    char *ptr = (char*)malloc(-1);
    return env->NewStringUTF(hello.c_str());
}
