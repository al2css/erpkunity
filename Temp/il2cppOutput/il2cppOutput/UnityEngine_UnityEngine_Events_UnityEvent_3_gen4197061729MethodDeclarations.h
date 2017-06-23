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

// UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>
struct UnityEvent_3_t4197061729;
// UnityEngine.Events.UnityAction`3<System.Single,System.Single,System.Single>
struct UnityAction_3_t235051313;
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

// System.Void UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>::.ctor()
extern "C"  void UnityEvent_3__ctor_m3100550874_gshared (UnityEvent_3_t4197061729 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m3100550874(__this, method) ((  void (*) (UnityEvent_3_t4197061729 *, const MethodInfo*))UnityEvent_3__ctor_m3100550874_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  void UnityEvent_3_AddListener_m3608966849_gshared (UnityEvent_3_t4197061729 * __this, UnityAction_3_t235051313 * ___call0, const MethodInfo* method);
#define UnityEvent_3_AddListener_m3608966849(__this, ___call0, method) ((  void (*) (UnityEvent_3_t4197061729 *, UnityAction_3_t235051313 *, const MethodInfo*))UnityEvent_3_AddListener_m3608966849_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  void UnityEvent_3_RemoveListener_m2407167912_gshared (UnityEvent_3_t4197061729 * __this, UnityAction_3_t235051313 * ___call0, const MethodInfo* method);
#define UnityEvent_3_RemoveListener_m2407167912(__this, ___call0, method) ((  void (*) (UnityEvent_3_t4197061729 *, UnityAction_3_t235051313 *, const MethodInfo*))UnityEvent_3_RemoveListener_m2407167912_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_3_FindMethod_Impl_m3507102016_gshared (UnityEvent_3_t4197061729 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m3507102016(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_3_t4197061729 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m3507102016_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_3_GetDelegate_m1256655068_gshared (UnityEvent_3_t4197061729 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m1256655068(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_3_t4197061729 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m1256655068_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>::GetDelegate(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_3_GetDelegate_m1077279524_gshared (Il2CppObject * __this /* static, unused */, UnityAction_3_t235051313 * ___action0, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m1077279524(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_3_t235051313 *, const MethodInfo*))UnityEvent_3_GetDelegate_m1077279524_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>::Invoke(T0,T1,T2)
extern "C"  void UnityEvent_3_Invoke_m2734200716_gshared (UnityEvent_3_t4197061729 * __this, float ___arg00, float ___arg11, float ___arg22, const MethodInfo* method);
#define UnityEvent_3_Invoke_m2734200716(__this, ___arg00, ___arg11, ___arg22, method) ((  void (*) (UnityEvent_3_t4197061729 *, float, float, float, const MethodInfo*))UnityEvent_3_Invoke_m2734200716_gshared)(__this, ___arg00, ___arg11, ___arg22, method)
