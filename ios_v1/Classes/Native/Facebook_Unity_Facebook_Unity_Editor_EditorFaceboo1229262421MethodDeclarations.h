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

// Facebook.Unity.Editor.EditorFacebook
struct EditorFacebook_t1229262421;
// Facebook.Unity.Editor.IEditorWrapper
struct IEditorWrapper_t4278084071;
// Facebook.Unity.CallbackManager
struct CallbackManager_t4242095184;
// System.String
struct String_t;
// Facebook.Unity.IFacebookCallbackHandler
struct IFacebookCallbackHandler_t1053405458;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t1547895262;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t607253590;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t2578089594;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t2564900615;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t1895462303;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t1759649537;
// Facebook.Unity.ResultContainer
struct ResultContainer_t2148006712;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager4242095184.h"
#include "Facebook_Unity_Facebook_Unity_ShareDialogMode1445392044.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer2148006712.h"

// System.Void Facebook.Unity.Editor.EditorFacebook::.ctor(Facebook.Unity.Editor.IEditorWrapper,Facebook.Unity.CallbackManager)
extern "C"  void EditorFacebook__ctor_m533648037 (EditorFacebook_t1229262421 * __this, Il2CppObject * ___wrapper0, CallbackManager_t4242095184 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::.ctor()
extern "C"  void EditorFacebook__ctor_m3556115703 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Editor.EditorFacebook::get_LimitEventUsage()
extern "C"  bool EditorFacebook_get_LimitEventUsage_m268919092 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void EditorFacebook_set_LimitEventUsage_m1932225081 (EditorFacebook_t1229262421 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void EditorFacebook_set_ShareDialogMode_m4089610841 (EditorFacebook_t1229262421 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKName()
extern "C"  String_t* EditorFacebook_get_SDKName_m3580393796 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKVersion()
extern "C"  String_t* EditorFacebook_get_SDKVersion_m3902464889 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookCallbackHandler Facebook.Unity.Editor.EditorFacebook::get_EditorGameObject()
extern "C"  Il2CppObject * EditorFacebook_get_EditorGameObject_m2629209230 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Init(Facebook.Unity.InitDelegate)
extern "C"  void EditorFacebook_Init_m2864915659 (EditorFacebook_t1229262421 * __this, InitDelegate_t3410465555 * ___onInitComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithReadPermissions_m2856781534 (EditorFacebook_t1229262421 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithPublishPermissions_m1445429817 (EditorFacebook_t1229262421 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void EditorFacebook_AppRequest_m2252142564 (EditorFacebook_t1229262421 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_ShareLink_m2559907103 (EditorFacebook_t1229262421 * __this, Uri_t19570940 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t19570940 * ___photoURL3, FacebookDelegate_1_t4160439974 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_FeedShare_m1959201479 (EditorFacebook_t1229262421 * __this, String_t* ___toId0, Uri_t19570940 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t19570940 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t4160439974 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void EditorFacebook_GameGroupCreate_m2658988579 (EditorFacebook_t1229262421 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t1547895262 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void EditorFacebook_GameGroupJoin_m95932515 (EditorFacebook_t1229262421 * __this, String_t* ___id0, FacebookDelegate_1_t607253590 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ActivateApp(System.String)
extern "C"  void EditorFacebook_ActivateApp_m2893481393 (EditorFacebook_t1229262421 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_GetAppLink_m2140817689 (EditorFacebook_t1229262421 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogEvent_m3464996076 (EditorFacebook_t1229262421 * __this, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogPurchase_m124274662 (EditorFacebook_t1229262421 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void EditorFacebook_AppInvite_m1165814775 (EditorFacebook_t1229262421 * __this, Uri_t19570940 * ___appLinkUrl0, Uri_t19570940 * ___previewImageUrl1, FacebookDelegate_1_t2564900615 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_FetchDeferredAppLink_m3296708472 (EditorFacebook_t1229262421 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void EditorFacebook_Pay_m423936334 (EditorFacebook_t1229262421 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t334943763  ___quantityMin3, Nullable_1_t334943763  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t1895462303 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void EditorFacebook_RefreshCurrentAccessToken_m3030607356 (EditorFacebook_t1229262421 * __this, FacebookDelegate_1_t1759649537 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnAppRequestsComplete_m1065308081 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGetAppLinkComplete_m2239434121 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGroupCreateComplete_m4075566961 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGroupJoinComplete_m408379247 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnLoginComplete_m3545348745 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnShareLinkComplete_m2719055087 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppInviteComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnAppInviteComplete_m636404546 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFetchDeferredAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnFetchDeferredAppLinkComplete_m1939659848 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnPayComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnPayComplete_m1926838906 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnRefreshCurrentAccessTokenComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnRefreshCurrentAccessTokenComplete_m326067869 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFacebookAuthResponseChange(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnFacebookAuthResponseChange_m2657577804 (EditorFacebook_t1229262421 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnUrlResponse(System.String)
extern "C"  void EditorFacebook_OnUrlResponse_m1346383828 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnHideUnity(System.Boolean)
extern "C"  void EditorFacebook_OnHideUnity_m914066504 (EditorFacebook_t1229262421 * __this, bool ___hidden0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
