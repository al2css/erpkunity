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

// Facebook.Unity.FacebookBase
struct FacebookBase_t2463540723;
// Facebook.Unity.CallbackManager
struct CallbackManager_t4242095184;
// System.String
struct String_t;
// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3020292135;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// Facebook.Unity.ResultContainer
struct ResultContainer_t2148006712;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t909463455;
// Facebook.Unity.LoginResult
struct LoginResult_t2244791044;
// System.Uri
struct Uri_t19570940;
// Facebook.Unity.ILoginResult
struct ILoginResult_t403585443;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager4242095184.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_String2029220233.h"
#include "Facebook_Unity_Facebook_Unity_HttpMethod3673888207.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer2148006712.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "Facebook_Unity_Facebook_Unity_LoginResult2244791044.h"

// System.Void Facebook.Unity.FacebookBase::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void FacebookBase__ctor_m3342407869 (FacebookBase_t2463540723 * __this, CallbackManager_t4242095184 * ___callbackManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FacebookBase::get_SDKUserAgent()
extern "C"  String_t* FacebookBase_get_SDKUserAgent_m3767814192 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FacebookBase::get_LoggedIn()
extern "C"  bool FacebookBase_get_LoggedIn_m3579165286 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FacebookBase::get_Initialized()
extern "C"  bool FacebookBase_get_Initialized_m3974969289 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::set_Initialized(System.Boolean)
extern "C"  void FacebookBase_set_Initialized_m1760930820 (FacebookBase_t2463540723 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.CallbackManager Facebook.Unity.FacebookBase::get_CallbackManager()
extern "C"  CallbackManager_t4242095184 * FacebookBase_get_CallbackManager_m3945259249 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::set_CallbackManager(Facebook.Unity.CallbackManager)
extern "C"  void FacebookBase_set_CallbackManager_m3626241832 (FacebookBase_t2463540723 * __this, CallbackManager_t4242095184 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::Init(Facebook.Unity.InitDelegate)
extern "C"  void FacebookBase_Init_m385464988 (FacebookBase_t2463540723 * __this, InitDelegate_t3410465555 * ___onInitComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::LogOut()
extern "C"  void FacebookBase_LogOut_m782874184 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::API(System.String,Facebook.Unity.HttpMethod,System.Collections.Generic.IDictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void FacebookBase_API_m1179039920 (FacebookBase_t2463540723 * __this, String_t* ___query0, int32_t ___method1, Il2CppObject* ___formData2, FacebookDelegate_1_t3020292135 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::API(System.String,Facebook.Unity.HttpMethod,UnityEngine.WWWForm,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void FacebookBase_API_m1520162772 (FacebookBase_t2463540723 * __this, String_t* ___query0, int32_t ___method1, WWWForm_t3950226929 * ___formData2, FacebookDelegate_1_t3020292135 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnInitComplete(Facebook.Unity.ResultContainer)
extern "C"  void FacebookBase_OnInitComplete_m2820139223 (FacebookBase_t2463540723 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnLogoutComplete(Facebook.Unity.ResultContainer)
extern "C"  void FacebookBase_OnLogoutComplete_m776081463 (FacebookBase_t2463540723 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::ValidateAppRequestArgs(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FacebookBase_ValidateAppRequestArgs_m3848648250 (FacebookBase_t2463540723 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnAuthResponse(Facebook.Unity.LoginResult)
extern "C"  void FacebookBase_OnAuthResponse_m2472488563 (FacebookBase_t2463540723 * __this, LoginResult_t2244791044 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Facebook.Unity.FacebookBase::CopyByValue(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  Il2CppObject* FacebookBase_CopyByValue_m1150674138 (FacebookBase_t2463540723 * __this, Il2CppObject* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Facebook.Unity.FacebookBase::GetGraphUrl(System.String)
extern "C"  Uri_t19570940 * FacebookBase_GetGraphUrl_m2658298089 (FacebookBase_t2463540723 * __this, String_t* ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::<OnInitComplete>m__0(Facebook.Unity.ILoginResult)
extern "C"  void FacebookBase_U3COnInitCompleteU3Em__0_m2683609913 (FacebookBase_t2463540723 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
