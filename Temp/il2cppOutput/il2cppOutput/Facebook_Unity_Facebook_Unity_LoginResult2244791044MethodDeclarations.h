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

// Facebook.Unity.LoginResult
struct LoginResult_t2244791044;
// Facebook.Unity.ResultContainer
struct ResultContainer_t2148006712;
// Facebook.Unity.AccessToken
struct AccessToken_t2518141643;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer2148006712.h"
#include "Facebook_Unity_Facebook_Unity_AccessToken2518141643.h"

// System.Void Facebook.Unity.LoginResult::.ctor(Facebook.Unity.ResultContainer)
extern "C"  void LoginResult__ctor_m3039056080 (LoginResult_t2244791044 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::get_AccessToken()
extern "C"  AccessToken_t2518141643 * LoginResult_get_AccessToken_m4002122182 (LoginResult_t2244791044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::set_AccessToken(Facebook.Unity.AccessToken)
extern "C"  void LoginResult_set_AccessToken_m2576548533 (LoginResult_t2244791044 * __this, AccessToken_t2518141643 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.LoginResult::ToString()
extern "C"  String_t* LoginResult_ToString_m2904892534 (LoginResult_t2244791044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::.cctor()
extern "C"  void LoginResult__cctor_m3232518798 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
