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

// Facebook.Unity.Arcade.ArcadeFacebookGameObject
struct ArcadeFacebookGameObject_t1372893397;
// Facebook.Unity.Arcade.IArcadeFacebookImplementation
struct IArcadeFacebookImplementation_t716105679;
// Facebook.Unity.Arcade.ArcadeFacebook/OnComplete
struct OnComplete_t3968443998;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_Arcade_ArcadeFaceboo3968443998.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Facebook.Unity.Arcade.ArcadeFacebookGameObject::.ctor()
extern "C"  void ArcadeFacebookGameObject__ctor_m64745490 (ArcadeFacebookGameObject_t1372893397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Arcade.IArcadeFacebookImplementation Facebook.Unity.Arcade.ArcadeFacebookGameObject::get_ArcadeFacebookImpl()
extern "C"  Il2CppObject * ArcadeFacebookGameObject_get_ArcadeFacebookImpl_m2522977478 (ArcadeFacebookGameObject_t1372893397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebookGameObject::WaitForResponse(Facebook.Unity.Arcade.ArcadeFacebook/OnComplete,System.String)
extern "C"  void ArcadeFacebookGameObject_WaitForResponse_m2587206051 (ArcadeFacebookGameObject_t1372893397 * __this, OnComplete_t3968443998 * ___onCompleteDelegate0, String_t* ___callbackId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebookGameObject::OnAwake()
extern "C"  void ArcadeFacebookGameObject_OnAwake_m1826982090 (ArcadeFacebookGameObject_t1372893397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.Unity.Arcade.ArcadeFacebookGameObject::WaitForPipeResponse(Facebook.Unity.Arcade.ArcadeFacebook/OnComplete,System.String)
extern "C"  Il2CppObject * ArcadeFacebookGameObject_WaitForPipeResponse_m1023846425 (ArcadeFacebookGameObject_t1372893397 * __this, OnComplete_t3968443998 * ___onCompleteDelegate0, String_t* ___callbackId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
