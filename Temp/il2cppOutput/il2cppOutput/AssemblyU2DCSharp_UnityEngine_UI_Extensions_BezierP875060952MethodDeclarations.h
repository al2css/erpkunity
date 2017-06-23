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

// UnityEngine.UI.Extensions.BezierPath
struct BezierPath_t875060952;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UnityEngine.UI.Extensions.BezierPath::.ctor()
extern "C"  void BezierPath__ctor_m1251390798 (BezierPath_t875060952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.BezierPath::SetControlPoints(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void BezierPath_SetControlPoints_m1054675664 (BezierPath_t875060952 * __this, List_1_t1612828711 * ___newControlPoints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.BezierPath::SetControlPoints(UnityEngine.Vector2[])
extern "C"  void BezierPath_SetControlPoints_m3683158862 (BezierPath_t875060952 * __this, Vector2U5BU5D_t686124026* ___newControlPoints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.Extensions.BezierPath::GetControlPoints()
extern "C"  List_1_t1612828711 * BezierPath_GetControlPoints_m3942989611 (BezierPath_t875060952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.BezierPath::Interpolate(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Single)
extern "C"  void BezierPath_Interpolate_m951112400 (BezierPath_t875060952 * __this, List_1_t1612828711 * ___segmentPoints0, float ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.BezierPath::SamplePoints(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Single,System.Single,System.Single)
extern "C"  void BezierPath_SamplePoints_m933790168 (BezierPath_t875060952 * __this, List_1_t1612828711 * ___sourcePoints0, float ___minSqrDistance1, float ___maxSqrDistance2, float ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Extensions.BezierPath::CalculateBezierPoint(System.Int32,System.Single)
extern "C"  Vector2_t2243707579  BezierPath_CalculateBezierPoint_m1944834206 (BezierPath_t875060952 * __this, int32_t ___curveIndex0, float ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.Extensions.BezierPath::GetDrawingPoints0()
extern "C"  List_1_t1612828711 * BezierPath_GetDrawingPoints0_m4116370078 (BezierPath_t875060952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.Extensions.BezierPath::GetDrawingPoints1()
extern "C"  List_1_t1612828711 * BezierPath_GetDrawingPoints1_m3975207577 (BezierPath_t875060952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.Extensions.BezierPath::GetDrawingPoints2()
extern "C"  List_1_t1612828711 * BezierPath_GetDrawingPoints2_m103727784 (BezierPath_t875060952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.Extensions.BezierPath::FindDrawingPoints(System.Int32)
extern "C"  List_1_t1612828711 * BezierPath_FindDrawingPoints_m2823287376 (BezierPath_t875060952 * __this, int32_t ___curveIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.BezierPath::FindDrawingPoints(System.Int32,System.Single,System.Single,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Int32)
extern "C"  int32_t BezierPath_FindDrawingPoints_m3123116098 (BezierPath_t875060952 * __this, int32_t ___curveIndex0, float ___t01, float ___t12, List_1_t1612828711 * ___pointList3, int32_t ___insertionIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Extensions.BezierPath::CalculateBezierPoint(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  BezierPath_CalculateBezierPoint_m2077811893 (BezierPath_t875060952 * __this, float ___t0, Vector2_t2243707579  ___p01, Vector2_t2243707579  ___p12, Vector2_t2243707579  ___p23, Vector2_t2243707579  ___p34, const MethodInfo* method) IL2CPP_METHOD_ATTR;
