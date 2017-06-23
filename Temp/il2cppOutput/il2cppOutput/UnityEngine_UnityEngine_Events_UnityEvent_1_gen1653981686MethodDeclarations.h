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

// UnityEngine.Events.UnityEvent`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>
struct UnityEvent_1_t1653981686;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>
struct UnityAction_1_t2982217422;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_Reorde1615631671.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::.ctor()
extern "C"  void UnityEvent_1__ctor_m606885190_gshared (UnityEvent_1_t1653981686 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m606885190(__this, method) ((  void (*) (UnityEvent_1_t1653981686 *, const MethodInfo*))UnityEvent_1__ctor_m606885190_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m2205567602_gshared (UnityEvent_1_t1653981686 * __this, UnityAction_1_t2982217422 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2205567602(__this, ___call0, method) ((  void (*) (UnityEvent_1_t1653981686 *, UnityAction_1_t2982217422 *, const MethodInfo*))UnityEvent_1_AddListener_m2205567602_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m3214076273_gshared (UnityEvent_1_t1653981686 * __this, UnityAction_1_t2982217422 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m3214076273(__this, ___call0, method) ((  void (*) (UnityEvent_1_t1653981686 *, UnityAction_1_t2982217422 *, const MethodInfo*))UnityEvent_1_RemoveListener_m3214076273_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m1827042058_gshared (UnityEvent_1_t1653981686 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m1827042058(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t1653981686 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m1827042058_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m3677931352_gshared (UnityEvent_1_t1653981686 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3677931352(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_1_t1653981686 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m3677931352_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m859726841_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t2982217422 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m859726841(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t2982217422 *, const MethodInfo*))UnityEvent_1_GetDelegate_m859726841_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m1127264645_gshared (UnityEvent_1_t1653981686 * __this, ReorderableListEventStruct_t1615631671  ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1127264645(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t1653981686 *, ReorderableListEventStruct_t1615631671 , const MethodInfo*))UnityEvent_1_Invoke_m1127264645_gshared)(__this, ___arg00, method)
