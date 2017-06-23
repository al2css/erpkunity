#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.IOS.IOSWrapper
struct IOSWrapper_t294756590;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Facebook.Unity.IOS.IOSWrapper::.ctor()
extern "C"  void IOSWrapper__ctor_m3492638423 (IOSWrapper_t294756590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::Init(System.String,System.Boolean,System.String,System.String)
extern "C"  void IOSWrapper_Init_m4044042630 (IOSWrapper_t294756590 * __this, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::LogInWithReadPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_LogInWithReadPermissions_m2416395187 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::LogInWithPublishPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_LogInWithPublishPermissions_m1237464384 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::LogOut()
extern "C"  void IOSWrapper_LogOut_m1708493573 (IOSWrapper_t294756590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::SetShareDialogMode(System.Int32)
extern "C"  void IOSWrapper_SetShareDialogMode_m4089495540 (IOSWrapper_t294756590 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::ShareLink(System.Int32,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_ShareLink_m3201753603 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::FeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_FeedShare_m2448783915 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::AppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_AppRequest_m410058696 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_t1642385972* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_t1642385972* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::AppInvite(System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_AppInvite_m3762505178 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, String_t* ___appLinkUrl1, String_t* ___previewImageUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::CreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C"  void IOSWrapper_CreateGameGroup_m2666235053 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, String_t* ___name1, String_t* ___description2, String_t* ___privacy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::JoinGameGroup(System.Int32,System.String)
extern "C"  void IOSWrapper_JoinGameGroup_m3292073363 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, String_t* ___groupId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::FBSettingsActivateApp(System.String)
extern "C"  void IOSWrapper_FBSettingsActivateApp_m3904596848 (IOSWrapper_t294756590 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::LogAppEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_LogAppEvent_m2988588831 (IOSWrapper_t294756590 * __this, String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_t1642385972* ___paramKeys3, StringU5BU5D_t1642385972* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::LogPurchaseAppEvent(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_LogPurchaseAppEvent_m855950180 (IOSWrapper_t294756590 * __this, double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_t1642385972* ___paramKeys3, StringU5BU5D_t1642385972* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::FBAppEventsSetLimitEventUsage(System.Boolean)
extern "C"  void IOSWrapper_FBAppEventsSetLimitEventUsage_m3970473682 (IOSWrapper_t294756590 * __this, bool ___limitEventUsage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::GetAppLink(System.Int32)
extern "C"  void IOSWrapper_GetAppLink_m2773878673 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.IOS.IOSWrapper::FBSdkVersion()
extern "C"  String_t* IOSWrapper_FBSdkVersion_m1433820366 (IOSWrapper_t294756590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::FetchDeferredAppLink(System.Int32)
extern "C"  void IOSWrapper_FetchDeferredAppLink_m3892819798 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::RefreshCurrentAccessToken(System.Int32)
extern "C"  void IOSWrapper_RefreshCurrentAccessToken_m2438835001 (IOSWrapper_t294756590 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBInit(System.String,System.Boolean,System.String,System.String)
extern "C"  void IOSWrapper_IOSFBInit_m902272037 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogInWithReadPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSFBLogInWithReadPermissions_m1929637458 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogInWithPublishPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSFBLogInWithPublishPermissions_m1193287201 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBLogOut()
extern "C"  void IOSWrapper_IOSFBLogOut_m1975029250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSetShareDialogMode(System.Int32)
extern "C"  void IOSWrapper_IOSFBSetShareDialogMode_m3394844047 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBShareLink(System.Int32,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSFBShareLink_m3128905012 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBFeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSFBFeedShare_m2674999132 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_IOSFBAppRequest_m3493977217 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_t1642385972* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_t1642385972* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppInvite(System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_IOSFBAppInvite_m1414880447 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___appLinkUrl1, String_t* ___previewImageUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSFBCreateGameGroup_m1363285378 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___name1, String_t* ___description2, String_t* ___privacy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBJoinGameGroup(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSFBJoinGameGroup_m1281811042 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___groupId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBSettingsActivateApp(System.String)
extern "C"  void IOSWrapper_IOSFBSettingsActivateApp_m797401977 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_IOSFBAppEventsLogEvent_m1319076241 (Il2CppObject * __this /* static, unused */, String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_t1642385972* ___paramKeys3, StringU5BU5D_t1642385972* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_IOSFBAppEventsLogPurchase_m1964399802 (Il2CppObject * __this /* static, unused */, double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_t1642385972* ___paramKeys3, StringU5BU5D_t1642385972* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C"  void IOSWrapper_IOSFBAppEventsSetLimitEventUsage_m1765600937 (Il2CppObject * __this /* static, unused */, bool ___limitEventUsage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBGetAppLink(System.Int32)
extern "C"  void IOSWrapper_IOSFBGetAppLink_m459813758 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.IOS.IOSWrapper::IOSFBSdkVersion()
extern "C"  String_t* IOSWrapper_IOSFBSdkVersion_m1954204313 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBFetchDeferredAppLink(System.Int32)
extern "C"  void IOSWrapper_IOSFBFetchDeferredAppLink_m4025468277 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOS.IOSWrapper::IOSFBRefreshCurrentAccessToken(System.Int32)
extern "C"  void IOSWrapper_IOSFBRefreshCurrentAccessToken_m1240471684 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
