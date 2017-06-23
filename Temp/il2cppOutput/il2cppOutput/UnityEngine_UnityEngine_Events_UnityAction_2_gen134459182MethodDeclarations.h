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

// UnityEngine.Events.UnityAction`2<System.Single,System.Single>
struct UnityAction_2_t134459182;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m2891411084_gshared (UnityAction_2_t134459182 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_2__ctor_m2891411084(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_2_t134459182 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m2891411084_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Single,System.Single>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m3374088624_gshared (UnityAction_2_t134459182 * __this, float ___arg00, float ___arg11, const MethodInfo* method);
#define UnityAction_2_Invoke_m3374088624(__this, ___arg00, ___arg11, method) ((  void (*) (UnityAction_2_t134459182 *, float, float, const MethodInfo*))UnityAction_2_Invoke_m3374088624_gshared)(__this, ___arg00, ___arg11, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Single,System.Single>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m4062895899_gshared (UnityAction_2_t134459182 * __this, float ___arg00, float ___arg11, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m4062895899(__this, ___arg00, ___arg11, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAction_2_t134459182 *, float, float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m4062895899_gshared)(__this, ___arg00, ___arg11, ___callback2, ___object3, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m1634636291_gshared (UnityAction_2_t134459182 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m1634636291(__this, ___result0, method) ((  void (*) (UnityAction_2_t134459182 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m1634636291_gshared)(__this, ___result0, method)
