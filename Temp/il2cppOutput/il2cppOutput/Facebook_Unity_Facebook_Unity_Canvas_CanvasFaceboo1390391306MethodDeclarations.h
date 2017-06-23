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

// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_t1390391306;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t562769999;
// Facebook.Unity.CallbackManager
struct CallbackManager_t4242095184;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t712804158;
// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t3733898188;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t909463455;
// System.Uri
struct Uri_t19570940;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t4160439974;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t1895462303;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t1547895262;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t607253590;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t2578089594;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// Facebook.Unity.ResultContainer
struct ResultContainer_t2148006712;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t1171021859;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager4242095184.h"
#include "mscorlib_System_String2029220233.h"
#include "Facebook_Unity_Facebook_Unity_HideUnityDelegate712804158.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer2148006712.h"

// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor()
extern "C"  void CanvasFacebook__ctor_m1018882635 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor(Facebook.Unity.Canvas.ICanvasJSWrapper,Facebook.Unity.CallbackManager)
extern "C"  void CanvasFacebook__ctor_m1481427064 (CanvasFacebook_t1390391306 * __this, Il2CppObject * ___canvasJSWrapper0, CallbackManager_t4242095184 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::get_LimitEventUsage()
extern "C"  bool CanvasFacebook_get_LimitEventUsage_m4082255134 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void CanvasFacebook_set_LimitEventUsage_m3306473885 (CanvasFacebook_t1390391306 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKName()
extern "C"  String_t* CanvasFacebook_get_SDKName_m952636314 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKVersion()
extern "C"  String_t* CanvasFacebook_get_SDKVersion_m2217442685 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKUserAgent()
extern "C"  String_t* CanvasFacebook_get_SDKUserAgent_m2832313095 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,System.String,System.Boolean,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void CanvasFacebook_Init_m4156905438 (CanvasFacebook_t1390391306 * __this, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, String_t* ___channelUrl5, String_t* ___authResponse6, bool ___frictionlessRequests7, String_t* ___javascriptSDKLocale8, bool ___loadDebugJSSDK9, HideUnityDelegate_t712804158 * ___hideUnityDelegate10, InitDelegate_t3410465555 * ___onInitComplete11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithPublishPermissions_m2878394461 (CanvasFacebook_t1390391306 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithReadPermissions_m4231782644 (CanvasFacebook_t1390391306 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogOut()
extern "C"  void CanvasFacebook_LogOut_m292792237 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void CanvasFacebook_AppRequest_m1462689246 (CanvasFacebook_t1390391306 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ActivateApp(System.String)
extern "C"  void CanvasFacebook_ActivateApp_m946310245 (CanvasFacebook_t1390391306 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_ShareLink_m2627843891 (CanvasFacebook_t1390391306 * __this, Uri_t19570940 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t19570940 * ___photoURL3, FacebookDelegate_1_t4160439974 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_FeedShare_m1788313243 (CanvasFacebook_t1390391306 * __this, String_t* ___toId0, Uri_t19570940 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t19570940 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t4160439974 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_Pay_m223936056 (CanvasFacebook_t1390391306 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t334943763  ___quantityMin3, Nullable_1_t334943763  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t1895462303 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void CanvasFacebook_GameGroupCreate_m2230591495 (CanvasFacebook_t1390391306 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t1547895262 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void CanvasFacebook_GameGroupJoin_m2627705863 (CanvasFacebook_t1390391306 * __this, String_t* ___id0, FacebookDelegate_1_t607253590 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void CanvasFacebook_GetAppLink_m3654825445 (CanvasFacebook_t1390391306 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogEvent_m4125866866 (CanvasFacebook_t1390391306 * __this, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogPurchase_m3226639516 (CanvasFacebook_t1390391306 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnLoginComplete_m76415677 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGetAppLinkComplete_m2665033941 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnFacebookAuthResponseChange(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnFacebookAuthResponseChange_m253384070 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnPayComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnPayComplete_m2768754784 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnAppRequestsComplete_m2396097317 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnShareLinkComplete_m3112387731 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGroupCreateComplete_m1075406477 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGroupJoinComplete_m3722883411 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnUrlResponse(System.String)
extern "C"  void CanvasFacebook_OnUrlResponse_m2951047274 (CanvasFacebook_t1390391306 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnHideUnity(System.Boolean)
extern "C"  void CanvasFacebook_OnHideUnity_m42563218 (CanvasFacebook_t1390391306 * __this, bool ___isGameShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::FormatAuthResponse(Facebook.Unity.ResultContainer,Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>)
extern "C"  void CanvasFacebook_FormatAuthResponse_m1552538275 (Il2CppObject * __this /* static, unused */, ResultContainer_t2148006712 * ___result0, Callback_1_t1171021859 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::PayImpl(System.String,System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_PayImpl_m76963138 (CanvasFacebook_t1390391306 * __this, String_t* ___product0, String_t* ___productId1, String_t* ___action2, int32_t ___quantity3, Nullable_1_t334943763  ___quantityMin4, Nullable_1_t334943763  ___quantityMax5, String_t* ___requestId6, String_t* ___pricepointId7, String_t* ___testCurrency8, String_t* ___developerPayload9, FacebookDelegate_1_t1895462303 * ___callback10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::<OnLoginComplete>m__0(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_U3COnLoginCompleteU3Em__0_m320389948 (CanvasFacebook_t1390391306 * __this, ResultContainer_t2148006712 * ___formattedResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::<OnFacebookAuthResponseChange>m__1(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_U3COnFacebookAuthResponseChangeU3Em__1_m164521760 (Il2CppObject * __this /* static, unused */, ResultContainer_t2148006712 * ___formattedResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
