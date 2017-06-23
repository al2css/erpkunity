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

// UnityEngine.UI.Extensions.UICornerCut
struct UICornerCut_t1498381979;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t385374196;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper385374196.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UnityEngine.UI.Extensions.UICornerCut::.ctor()
extern "C"  void UICornerCut__ctor_m2723551383 (UICornerCut_t1498381979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UICornerCut::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void UICornerCut_OnPopulateMesh_m1773472244 (UICornerCut_t1498381979 * __this, VertexHelper_t385374196 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UICornerCut::AddSquare(UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Color32,UnityEngine.UI.VertexHelper)
extern "C"  void UICornerCut_AddSquare_m1407532735 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, Rect_t3681755626  ___rectUV1, Color32_t874517518  ___color322, VertexHelper_t385374196 * ___vh3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UICornerCut::AddSquare(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Rect,UnityEngine.Color32,UnityEngine.UI.VertexHelper)
extern "C"  void UICornerCut_AddSquare_m3213966428 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___a0, Vector2_t2243707579  ___b1, Vector2_t2243707579  ___c2, Vector2_t2243707579  ___d3, Rect_t3681755626  ___rectUV4, Color32_t874517518  ___color325, VertexHelper_t385374196 * ___vh6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.UICornerCut::AddVert(System.Single,System.Single,UnityEngine.Rect,UnityEngine.Color32,UnityEngine.UI.VertexHelper)
extern "C"  int32_t UICornerCut_AddVert_m3247732230 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, Rect_t3681755626  ___area2, Color32_t874517518  ___color323, VertexHelper_t385374196 * ___vh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
