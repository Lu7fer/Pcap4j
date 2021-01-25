/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cf_vbnm_pcap4j_AbstractWinPcap */

#ifndef _Included_cf_vbnm_pcap4j_AbstractWinPcap
#define _Included_cf_vbnm_pcap4j_AbstractWinPcap
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cf_vbnm_pcap4j_AbstractWinPcap
 * Method:    findDevices0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_cf_vbnm_pcap4j_AbstractWinPcap_findDevices0
  (JNIEnv *, jobject);

/*
 * Class:     cf_vbnm_pcap4j_AbstractWinPcap
 * Method:    obtainDevicesList
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_cf_vbnm_pcap4j_AbstractWinPcap_obtainDevicesList
  (JNIEnv *, jobject);

/*
 * Class:     cf_vbnm_pcap4j_AbstractWinPcap
 * Method:    openDevice0
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_cf_vbnm_pcap4j_AbstractWinPcap_openDevice0
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     cf_vbnm_pcap4j_AbstractWinPcap
 * Method:    loopCapture0
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_cf_vbnm_pcap4j_AbstractWinPcap_loopCapture0
  (JNIEnv *, jobject, jint);

/*
 * Class:     cf_vbnm_pcap4j_AbstractWinPcap
 * Method:    breakLoop0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cf_vbnm_pcap4j_AbstractWinPcap_breakLoop0
  (JNIEnv *, jobject);

/*
 * Class:     cf_vbnm_pcap4j_AbstractWinPcap
 * Method:    capNext0
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_cf_vbnm_pcap4j_AbstractWinPcap_capNext0
  (JNIEnv *, jobject);

/*
 * Class:     cf_vbnm_pcap4j_AbstractWinPcap
 * Method:    sendPacket0
 * Signature: ([BI)Z
 */
JNIEXPORT jboolean JNICALL Java_cf_vbnm_pcap4j_AbstractWinPcap_sendPacket0
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     cf_vbnm_pcap4j_AbstractWinPcap
 * Method:    close0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cf_vbnm_pcap4j_AbstractWinPcap_close0
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
