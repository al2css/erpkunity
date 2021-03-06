﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Gradient
struct Gradient_t3600583008;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_t3863936331;
struct Gradient_t3600583008_marshaled_pinvoke;
struct Gradient_t3600583008_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Gradient3600583008.h"

// System.Void UnityEngine.Gradient::.ctor()
extern "C"  void Gradient__ctor_m954570311 (Gradient_t3600583008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C"  void Gradient_Init_m4156899649 (Gradient_t3600583008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C"  void Gradient_Cleanup_m3573871739 (Gradient_t3600583008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C"  void Gradient_Finalize_m2023716701 (Gradient_t3600583008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
extern "C"  Color_t2020392075  Gradient_Evaluate_m1322905850 (Gradient_t3600583008 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::INTERNAL_CALL_Evaluate(UnityEngine.Gradient,System.Single,UnityEngine.Color&)
extern "C"  void Gradient_INTERNAL_CALL_Evaluate_m1447487565 (Il2CppObject * __this /* static, unused */, Gradient_t3600583008 * ___self0, float ___time1, Color_t2020392075 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::set_colorKeys(UnityEngine.GradientColorKey[])
extern "C"  void Gradient_set_colorKeys_m4173214858 (Gradient_t3600583008 * __this, GradientColorKeyU5BU5D_t3863936331* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Gradient_t3600583008;
struct Gradient_t3600583008_marshaled_pinvoke;

extern "C" void Gradient_t3600583008_marshal_pinvoke(const Gradient_t3600583008& unmarshaled, Gradient_t3600583008_marshaled_pinvoke& marshaled);
extern "C" void Gradient_t3600583008_marshal_pinvoke_back(const Gradient_t3600583008_marshaled_pinvoke& marshaled, Gradient_t3600583008& unmarshaled);
extern "C" void Gradient_t3600583008_marshal_pinvoke_cleanup(Gradient_t3600583008_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Gradient_t3600583008;
struct Gradient_t3600583008_marshaled_com;

extern "C" void Gradient_t3600583008_marshal_com(const Gradient_t3600583008& unmarshaled, Gradient_t3600583008_marshaled_com& marshaled);
extern "C" void Gradient_t3600583008_marshal_com_back(const Gradient_t3600583008_marshaled_com& marshaled, Gradient_t3600583008& unmarshaled);
extern "C" void Gradient_t3600583008_marshal_com_cleanup(Gradient_t3600583008_marshaled_com& marshaled);
