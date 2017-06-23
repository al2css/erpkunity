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

// UnityEngine.UI.Extensions.UILineTextureRenderer
struct UILineTextureRenderer_t1203126486;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t385374196;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper385374196.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityEngine.UI.Extensions.UILineTextureRenderer::.ctor()
extern "C"  void UILineTextureRenderer__ctor_m2903897396 (UILineTextureRenderer_t1203126486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Extensions.UILineTextureRenderer::get_uvRect()
extern "C"  Rect_t3681755626  UILineTextureRenderer_get_uvRect_m1722901578 (UILineTextureRenderer_t1203126486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UILineTextureRenderer::set_uvRect(UnityEngine.Rect)
extern "C"  void UILineTextureRenderer_set_uvRect_m2609578107 (UILineTextureRenderer_t1203126486 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.UI.Extensions.UILineTextureRenderer::get_Points()
extern "C"  Vector2U5BU5D_t686124026* UILineTextureRenderer_get_Points_m4109567277 (UILineTextureRenderer_t1203126486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UILineTextureRenderer::set_Points(UnityEngine.Vector2[])
extern "C"  void UILineTextureRenderer_set_Points_m2861591664 (UILineTextureRenderer_t1203126486 * __this, Vector2U5BU5D_t686124026* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UILineTextureRenderer::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void UILineTextureRenderer_OnPopulateMesh_m902949345 (UILineTextureRenderer_t1203126486 * __this, VertexHelper_t385374196 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Extensions.UILineTextureRenderer::RotatePointAroundPivot(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  UILineTextureRenderer_RotatePointAroundPivot_m633036615 (UILineTextureRenderer_t1203126486 * __this, Vector3_t2243707580  ___point0, Vector3_t2243707580  ___pivot1, Vector3_t2243707580  ___angles2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
