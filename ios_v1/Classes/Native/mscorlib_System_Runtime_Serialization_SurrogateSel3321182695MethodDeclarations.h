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

// System.Runtime.Serialization.SurrogateSelector
struct SurrogateSelector_t3321182695;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t1282780357;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Runtime.Serialization.SurrogateSelector::.ctor()
extern "C"  void SurrogateSelector__ctor_m404668344 (SurrogateSelector_t3321182695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate)
extern "C"  void SurrogateSelector_AddSurrogate_m3110175148 (SurrogateSelector_t3321182695 * __this, Type_t * ___type0, StreamingContext_t1417235061  ___context1, Il2CppObject * ___surrogate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.SurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern "C"  Il2CppObject * SurrogateSelector_GetSurrogate_m3252971069 (SurrogateSelector_t3321182695 * __this, Type_t * ___type0, StreamingContext_t1417235061  ___context1, Il2CppObject ** ___selector2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
