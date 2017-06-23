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

// UnityEngine.Events.UnityAction`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>
struct UnityAction_1_t2982217422;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_Reorde1615631671.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m1596393434_gshared (UnityAction_1_t2982217422 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_1__ctor_m1596393434(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_1_t2982217422 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1596393434_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m218617243_gshared (UnityAction_1_t2982217422 * __this, ReorderableListEventStruct_t1615631671  ___arg00, const MethodInfo* method);
#define UnityAction_1_Invoke_m218617243(__this, ___arg00, method) ((  void (*) (UnityAction_1_t2982217422 *, ReorderableListEventStruct_t1615631671 , const MethodInfo*))UnityAction_1_Invoke_m218617243_gshared)(__this, ___arg00, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m2330747674_gshared (UnityAction_1_t2982217422 * __this, ReorderableListEventStruct_t1615631671  ___arg00, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m2330747674(__this, ___arg00, ___callback1, ___object2, method) ((  Il2CppObject * (*) (UnityAction_1_t2982217422 *, ReorderableListEventStruct_t1615631671 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m2330747674_gshared)(__this, ___arg00, ___callback1, ___object2, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m1862030697_gshared (UnityAction_1_t2982217422 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m1862030697(__this, ___result0, method) ((  void (*) (UnityAction_1_t2982217422 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m1862030697_gshared)(__this, ___result0, method)
