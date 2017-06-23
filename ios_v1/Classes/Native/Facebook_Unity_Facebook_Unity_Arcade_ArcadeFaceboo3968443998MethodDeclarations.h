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

// Facebook.Unity.Arcade.ArcadeFacebook/OnComplete
struct OnComplete_t3968443998;
// System.Object
struct Il2CppObject;
// Facebook.Unity.ResultContainer
struct ResultContainer_t2148006712;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer2148006712.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Facebook.Unity.Arcade.ArcadeFacebook/OnComplete::.ctor(System.Object,System.IntPtr)
extern "C"  void OnComplete__ctor_m2184785660 (OnComplete_t3968443998 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook/OnComplete::Invoke(Facebook.Unity.ResultContainer)
extern "C"  void OnComplete_Invoke_m191748185 (OnComplete_t3968443998 * __this, ResultContainer_t2148006712 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.Unity.Arcade.ArcadeFacebook/OnComplete::BeginInvoke(Facebook.Unity.ResultContainer,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnComplete_BeginInvoke_m3559987016 (OnComplete_t3968443998 * __this, ResultContainer_t2148006712 * ___resultContainer0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook/OnComplete::EndInvoke(System.IAsyncResult)
extern "C"  void OnComplete_EndInvoke_m3220126790 (OnComplete_t3968443998 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
