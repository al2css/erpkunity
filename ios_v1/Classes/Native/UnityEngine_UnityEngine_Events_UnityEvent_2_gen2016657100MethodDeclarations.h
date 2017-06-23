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

// UnityEngine.Events.UnityEvent`2<System.Single,System.Single>
struct UnityEvent_2_t2016657100;
// UnityEngine.Events.UnityAction`2<System.Single,System.Single>
struct UnityAction_2_t134459182;
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

// System.Void UnityEngine.Events.UnityEvent`2<System.Single,System.Single>::.ctor()
extern "C"  void UnityEvent_2__ctor_m731674732_gshared (UnityEvent_2_t2016657100 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m731674732(__this, method) ((  void (*) (UnityEvent_2_t2016657100 *, const MethodInfo*))UnityEvent_2__ctor_m731674732_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Single,System.Single>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  void UnityEvent_2_AddListener_m297354571_gshared (UnityEvent_2_t2016657100 * __this, UnityAction_2_t134459182 * ___call0, const MethodInfo* method);
#define UnityEvent_2_AddListener_m297354571(__this, ___call0, method) ((  void (*) (UnityEvent_2_t2016657100 *, UnityAction_2_t134459182 *, const MethodInfo*))UnityEvent_2_AddListener_m297354571_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Single,System.Single>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  void UnityEvent_2_RemoveListener_m491466926_gshared (UnityEvent_2_t2016657100 * __this, UnityAction_2_t134459182 * ___call0, const MethodInfo* method);
#define UnityEvent_2_RemoveListener_m491466926(__this, ___call0, method) ((  void (*) (UnityEvent_2_t2016657100 *, UnityAction_2_t134459182 *, const MethodInfo*))UnityEvent_2_RemoveListener_m491466926_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Single,System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_2_FindMethod_Impl_m2411342182_gshared (UnityEvent_2_t2016657100 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m2411342182(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_2_t2016657100 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m2411342182_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Single,System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_2_GetDelegate_m3532661258_gshared (UnityEvent_2_t2016657100 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m3532661258(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_2_t2016657100 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m3532661258_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Single,System.Single>::GetDelegate(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_2_GetDelegate_m4266109845_gshared (Il2CppObject * __this /* static, unused */, UnityAction_2_t134459182 * ___action0, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m4266109845(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_2_t134459182 *, const MethodInfo*))UnityEvent_2_GetDelegate_m4266109845_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Single,System.Single>::Invoke(T0,T1)
extern "C"  void UnityEvent_2_Invoke_m4237217379_gshared (UnityEvent_2_t2016657100 * __this, float ___arg00, float ___arg11, const MethodInfo* method);
#define UnityEvent_2_Invoke_m4237217379(__this, ___arg00, ___arg11, method) ((  void (*) (UnityEvent_2_t2016657100 *, float, float, const MethodInfo*))UnityEvent_2_Invoke_m4237217379_gshared)(__this, ___arg00, ___arg11, method)
