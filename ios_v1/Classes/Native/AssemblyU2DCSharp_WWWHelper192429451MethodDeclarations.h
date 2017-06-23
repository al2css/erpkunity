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

// WWWHelper
struct WWWHelper_t192429451;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.WWW
struct WWW_t2919945039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"

// System.Void WWWHelper::.ctor()
extern "C"  void WWWHelper__ctor_m793840958 (WWWHelper_t192429451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWHelper::Awake()
extern "C"  void WWWHelper_Awake_m2198700055 (WWWHelper_t192429451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWHelper::Get(System.String)
extern "C"  void WWWHelper_Get_m2144933560 (WWWHelper_t192429451 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WWWHelper::WaitForRequest(UnityEngine.WWW)
extern "C"  Il2CppObject * WWWHelper_WaitForRequest_m1980576365 (WWWHelper_t192429451 * __this, WWW_t2919945039 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
