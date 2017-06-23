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

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>
struct UnityEvent_1_t3020313056;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.PointerEventData/InputButton>
struct UnityAction_1_t53581496;
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
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve2981963041.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1526323464_gshared (UnityEvent_1_t3020313056 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1526323464(__this, method) ((  void (*) (UnityEvent_1_t3020313056 *, const MethodInfo*))UnityEvent_1__ctor_m1526323464_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m1355485366_gshared (UnityEvent_1_t3020313056 * __this, UnityAction_1_t53581496 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1355485366(__this, ___call0, method) ((  void (*) (UnityEvent_1_t3020313056 *, UnityAction_1_t53581496 *, const MethodInfo*))UnityEvent_1_AddListener_m1355485366_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m2813469947_gshared (UnityEvent_1_t3020313056 * __this, UnityAction_1_t53581496 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2813469947(__this, ___call0, method) ((  void (*) (UnityEvent_1_t3020313056 *, UnityAction_1_t53581496 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2813469947_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2331063906_gshared (UnityEvent_1_t3020313056 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2331063906(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t3020313056 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2331063906_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m1569187686_gshared (UnityEvent_1_t3020313056 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m1569187686(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_1_t3020313056 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m1569187686_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m516560167_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t53581496 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m516560167(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t53581496 *, const MethodInfo*))UnityEvent_1_GetDelegate_m516560167_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.PointerEventData/InputButton>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m2393117251_gshared (UnityEvent_1_t3020313056 * __this, int32_t ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2393117251(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t3020313056 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m2393117251_gshared)(__this, ___arg00, method)
