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

// Facebook.Unity.Arcade.ArcadeFacebook
struct ArcadeFacebook_t622171242;
// Facebook.Unity.Arcade.IArcadeWrapper
struct IArcadeWrapper_t95833120;
// Facebook.Unity.CallbackManager
struct CallbackManager_t4242095184;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t712804158;
// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t3733898188;
// Facebook.Unity.ResultContainer
struct ResultContainer_t2148006712;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager4242095184.h"
#include "mscorlib_System_String2029220233.h"
#include "Facebook_Unity_Facebook_Unity_HideUnityDelegate712804158.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "System_System_Uri19570940.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer2148006712.h"

// System.Void Facebook.Unity.Arcade.ArcadeFacebook::.ctor()
extern "C"  void ArcadeFacebook__ctor_m2355776411 (ArcadeFacebook_t622171242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::.ctor(Facebook.Unity.Arcade.IArcadeWrapper,Facebook.Unity.CallbackManager)
extern "C"  void ArcadeFacebook__ctor_m1968119209 (ArcadeFacebook_t622171242 * __this, Il2CppObject * ___arcadeWrapper0, CallbackManager_t4242095184 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Arcade.ArcadeFacebook::get_LimitEventUsage()
extern "C"  bool ArcadeFacebook_get_LimitEventUsage_m1515675406 (ArcadeFacebook_t622171242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void ArcadeFacebook_set_LimitEventUsage_m2026489309 (ArcadeFacebook_t622171242 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Arcade.ArcadeFacebook::get_SDKName()
extern "C"  String_t* ArcadeFacebook_get_SDKName_m79671242 (ArcadeFacebook_t622171242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Arcade.ArcadeFacebook::get_SDKVersion()
extern "C"  String_t* ArcadeFacebook_get_SDKVersion_m1302274301 (ArcadeFacebook_t622171242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void ArcadeFacebook_Init_m2905948424 (ArcadeFacebook_t622171242 * __this, String_t* ___appId0, HideUnityDelegate_t712804158 * ___hideUnityDelegate1, InitDelegate_t3410465555 * ___onInitComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::ActivateApp(System.String)
extern "C"  void ArcadeFacebook_ActivateApp_m3744880501 (ArcadeFacebook_t622171242 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void ArcadeFacebook_AppEventsLogEvent_m723645682 (ArcadeFacebook_t622171242 * __this, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void ArcadeFacebook_AppEventsLogPurchase_m117958188 (ArcadeFacebook_t622171242 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void ArcadeFacebook_AppRequest_m1423123838 (ArcadeFacebook_t622171242 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void ArcadeFacebook_FeedShare_m183400011 (ArcadeFacebook_t622171242 * __this, String_t* ___toId0, Uri_t19570940 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t19570940 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t4160439974 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void ArcadeFacebook_ShareLink_m2422942403 (ArcadeFacebook_t622171242 * __this, Uri_t19570940 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t19570940 * ___photoURL3, FacebookDelegate_1_t4160439974 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void ArcadeFacebook_Pay_m2417701896 (ArcadeFacebook_t622171242 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t334943763  ___quantityMin3, Nullable_1_t334943763  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t1895462303 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void ArcadeFacebook_GameGroupCreate_m2959733159 (ArcadeFacebook_t622171242 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t1547895262 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void ArcadeFacebook_GameGroupJoin_m2254463399 (ArcadeFacebook_t622171242 * __this, String_t* ___id0, FacebookDelegate_1_t607253590 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void ArcadeFacebook_GetAppLink_m3419283125 (ArcadeFacebook_t622171242 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void ArcadeFacebook_LogInWithPublishPermissions_m2167710973 (ArcadeFacebook_t622171242 * __this, Il2CppObject* ___scope0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void ArcadeFacebook_LogInWithReadPermissions_m1170259268 (ArcadeFacebook_t622171242 * __this, Il2CppObject* ___scope0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnAppRequestsComplete_m749526517 (ArcadeFacebook_t622171242 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnGetAppLinkComplete_m4093804613 (ArcadeFacebook_t622171242 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnGroupCreateComplete_m3053458317 (ArcadeFacebook_t622171242 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnGroupJoinComplete_m2851779731 (ArcadeFacebook_t622171242 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnLoginComplete_m280984333 (ArcadeFacebook_t622171242 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnShareLinkComplete_m4145512819 (ArcadeFacebook_t622171242 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnPayComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnPayComplete_m2128719232 (ArcadeFacebook_t622171242 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Arcade.ArcadeFacebook::HaveReceivedPipeResponse()
extern "C"  bool ArcadeFacebook_HaveReceivedPipeResponse_m1943063237 (ArcadeFacebook_t622171242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Arcade.ArcadeFacebook::GetPipeResponse(System.String)
extern "C"  String_t* ArcadeFacebook_GetPipeResponse_m650724889 (ArcadeFacebook_t622171242 * __this, String_t* ___callbackId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Arcade.IArcadeWrapper Facebook.Unity.Arcade.ArcadeFacebook::GetArcadeWrapper()
extern "C"  Il2CppObject * ArcadeFacebook_GetArcadeWrapper_m1935281752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::PayImpl(System.String,System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void ArcadeFacebook_PayImpl_m1705055842 (ArcadeFacebook_t622171242 * __this, String_t* ___product0, String_t* ___productId1, String_t* ___action2, int32_t ___quantity3, Nullable_1_t334943763  ___quantityMin4, Nullable_1_t334943763  ___quantityMax5, String_t* ___requestId6, String_t* ___pricepointId7, String_t* ___testCurrency8, String_t* ___developerPayload9, FacebookDelegate_1_t1895462303 * ___callback10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::LoginWithPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void ArcadeFacebook_LoginWithPermissions_m1239748016 (ArcadeFacebook_t622171242 * __this, Il2CppObject* ___scope0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
