#include <jni.h>
#include <string>
#include <sys/ptrace.h>
#include <unistd.h>

extern "C" JNIEXPORT jboolean JNICALL
Java_sbx_Hardening_isNativeTampered(JNIEnv* env, jclass clazz) {
    // Cek Debugger via ptrace
    if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1) {
        return JNI_TRUE; 
    }
    return JNI_FALSE;
}
