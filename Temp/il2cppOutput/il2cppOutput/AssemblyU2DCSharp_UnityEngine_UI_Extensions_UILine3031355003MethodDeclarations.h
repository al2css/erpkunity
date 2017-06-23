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

// UnityEngine.UI.Extensions.UILineRenderer
struct UILineRenderer_t3031355003;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t385374196;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t3048644023;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper385374196.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_UILine3639054610.h"

// System.Void UnityEngine.UI.Extensions.UILineRenderer::.ctor()
extern "C"  void UILineRenderer__ctor_m330375797 (UILineRenderer_t3031355003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Extensions.UILineRenderer::get_uvRect()
extern "C"  Rect_t3681755626  UILineRenderer_get_uvRect_m1113050787 (UILineRenderer_t3031355003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UILineRenderer::set_uvRect(UnityEngine.Rect)
extern "C"  void UILineRenderer_set_uvRect_m2109812628 (UILineRenderer_t3031355003 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.UI.Extensions.UILineRenderer::get_Points()
extern "C"  Vector2U5BU5D_t686124026* UILineRenderer_get_Points_m944865102 (UILineRenderer_t3031355003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UILineRenderer::set_Points(UnityEngine.Vector2[])
extern "C"  void UILineRenderer_set_Points_m3754836245 (UILineRenderer_t3031355003 * __this, Vector2U5BU5D_t686124026* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UILineRenderer::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void UILineRenderer_OnPopulateMesh_m263853200 (UILineRenderer_t3031355003 * __this, VertexHelper_t385374196 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] UnityEngine.UI.Extensions.UILineRenderer::CreateLineCap(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.UI.Extensions.UILineRenderer/SegmentType)
extern "C"  UIVertexU5BU5D_t3048644023* UILineRenderer_CreateLineCap_m3240920813 (UILineRenderer_t3031355003 * __this, Vector2_t2243707579  ___start0, Vector2_t2243707579  ___end1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] UnityEngine.UI.Extensions.UILineRenderer::CreateLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.UI.Extensions.UILineRenderer/SegmentType)
extern "C"  UIVertexU5BU5D_t3048644023* UILineRenderer_CreateLineSegment_m3307907384 (UILineRenderer_t3031355003 * __this, Vector2_t2243707579  ___start0, Vector2_t2243707579  ___end1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UILineRenderer::.cctor()
extern "C"  void UILineRenderer__cctor_m2715382978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
