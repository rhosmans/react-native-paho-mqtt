#include <jni.h>
#include "react-native-paho-mqtt.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_pahomqtt_PahoMqttModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return pahomqtt::multiply(a, b);
}
