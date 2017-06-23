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

// Facebook.Unity.ResultBase
struct ResultBase_t864677574;
// Facebook.Unity.ResultContainer
struct ResultContainer_t2148006712;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer2148006712.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"

// System.Void Facebook.Unity.ResultBase::.ctor(Facebook.Unity.ResultContainer)
extern "C"  void ResultBase__ctor_m2641585732 (ResultBase_t864677574 * __this, ResultContainer_t2148006712 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::.ctor(Facebook.Unity.ResultContainer,System.String,System.Boolean)
extern "C"  void ResultBase__ctor_m964028441 (ResultBase_t864677574 * __this, ResultContainer_t2148006712 * ___result0, String_t* ___error1, bool ___cancelled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_Error()
extern "C"  String_t* ResultBase_get_Error_m3907791629 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_Error(System.String)
extern "C"  void ResultBase_set_Error_m285803608 (ResultBase_t864677574 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::get_ResultDictionary()
extern "C"  Il2CppObject* ResultBase_get_ResultDictionary_m4075361922 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_ResultDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ResultBase_set_ResultDictionary_m1782096151 (ResultBase_t864677574 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_RawResult()
extern "C"  String_t* ResultBase_get_RawResult_m1974343454 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_RawResult(System.String)
extern "C"  void ResultBase_set_RawResult_m1720109159 (ResultBase_t864677574 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.ResultBase::get_Cancelled()
extern "C"  bool ResultBase_get_Cancelled_m1546485547 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_Cancelled(System.Boolean)
extern "C"  void ResultBase_set_Cancelled_m416831770 (ResultBase_t864677574 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_CallbackId()
extern "C"  String_t* ResultBase_get_CallbackId_m3374485753 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_CallbackId(System.String)
extern "C"  void ResultBase_set_CallbackId_m2089623966 (ResultBase_t864677574 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> Facebook.Unity.ResultBase::get_CanvasErrorCode()
extern "C"  Nullable_1_t3467111648  ResultBase_get_CanvasErrorCode_m2774266589 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_CanvasErrorCode(System.Nullable`1<System.Int64>)
extern "C"  void ResultBase_set_CanvasErrorCode_m1942845712 (ResultBase_t864677574 * __this, Nullable_1_t3467111648  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::ToString()
extern "C"  String_t* ResultBase_ToString_m3924992508 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::Init(Facebook.Unity.ResultContainer,System.String,System.Boolean,System.String)
extern "C"  void ResultBase_Init_m2362672457 (ResultBase_t864677574 * __this, ResultContainer_t2148006712 * ___result0, String_t* ___error1, bool ___cancelled2, String_t* ___callbackId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::GetErrorValue(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResultBase_GetErrorValue_m2933206599 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.ResultBase::GetCancelledValue(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool ResultBase_GetCancelledValue_m2424280385 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::GetCallbackId(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResultBase_GetCallbackId_m996543320 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
