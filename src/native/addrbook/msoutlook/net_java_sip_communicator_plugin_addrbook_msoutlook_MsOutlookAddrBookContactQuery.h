/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery */

#ifndef _Included_net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery
#define _Included_net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery
 * Method:    foreachMailUser
 * Signature: (Ljava/lang/String;Lnet/java/sip/communicator/plugin/addrbook/PtrCallback;)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery_foreachMailUser
  (JNIEnv *, jclass, jstring, jobject);

JNIEXPORT jboolean JNICALL Java_net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery_IMAPIProp_1DeleteProp
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery
 * Method:    IMAPIProp_GetProps
 * Signature: (J[JJ)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery_IMAPIProp_1GetProps
  (JNIEnv *, jclass, jlong, jlongArray, jlong);

JNIEXPORT jboolean JNICALL Java_net_java_sip_communicator_plugin_addrbook_msoutlook_MsOutlookAddrBookContactQuery_IMAPIProp_1SetPropString
  (JNIEnv *, jclass, jlong, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
