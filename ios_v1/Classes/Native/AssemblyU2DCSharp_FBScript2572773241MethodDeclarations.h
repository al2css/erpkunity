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

// FBScript
struct FBScript_t2572773241;
// Facebook.Unity.IResult
struct IResult_t3447678270;
// Facebook.Unity.IGraphResult
struct IGraphResult_t3984946686;

#include "codegen/il2cpp-codegen.h"

// System.Void FBScript::.ctor()
extern "C"  void FBScript__ctor_m1498987410 (FBScript_t2572773241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::Awake()
extern "C"  void FBScript_Awake_m3389663253 (FBScript_t2572773241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::InitCallback()
extern "C"  void FBScript_InitCallback_m1031366047 (FBScript_t2572773241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::OnHideUnity(System.Boolean)
extern "C"  void FBScript_OnHideUnity_m3569832265 (FBScript_t2572773241 * __this, bool ___isGameShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::FBLogin()
extern "C"  void FBScript_FBLogin_m4162666995 (FBScript_t2572773241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::AuthCallback(Facebook.Unity.IResult)
extern "C"  void FBScript_AuthCallback_m611451268 (FBScript_t2572773241 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::ShowIfLogged(System.Boolean)
extern "C"  void FBScript_ShowIfLogged_m4075754089 (FBScript_t2572773241 * __this, bool ___isLoggedIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::AccessTokenCallback(Facebook.Unity.IResult)
extern "C"  void FBScript_AccessTokenCallback_m3935870401 (FBScript_t2572773241 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::DisplayUsername(Facebook.Unity.IResult)
extern "C"  void FBScript_DisplayUsername_m3782757251 (FBScript_t2572773241 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScript::DisplayUserPic(Facebook.Unity.IGraphResult)
extern "C"  void FBScript_DisplayUserPic_m2255051778 (FBScript_t2572773241 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
