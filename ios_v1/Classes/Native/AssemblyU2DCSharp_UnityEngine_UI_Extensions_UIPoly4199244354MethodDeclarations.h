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

// UnityEngine.UI.Extensions.UIPolygon
struct UIPolygon_t4199244354;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t385374196;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper385374196.h"

// System.Void UnityEngine.UI.Extensions.UIPolygon::.ctor()
extern "C"  void UIPolygon__ctor_m1684570140 (UIPolygon_t4199244354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPolygon::DrawPolygon(System.Int32)
extern "C"  void UIPolygon_DrawPolygon_m424989459 (UIPolygon_t4199244354 * __this, int32_t ____sides0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPolygon::DrawPolygon(System.Int32,System.Single[])
extern "C"  void UIPolygon_DrawPolygon_m691248886 (UIPolygon_t4199244354 * __this, int32_t ____sides0, SingleU5BU5D_t577127397* ____VerticesDistances1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPolygon::DrawPolygon(System.Int32,System.Single[],System.Single)
extern "C"  void UIPolygon_DrawPolygon_m3149548373 (UIPolygon_t4199244354 * __this, int32_t ____sides0, SingleU5BU5D_t577127397* ____VerticesDistances1, float ____rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPolygon::Update()
extern "C"  void UIPolygon_Update_m321581879 (UIPolygon_t4199244354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPolygon::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void UIPolygon_OnPopulateMesh_m3804344973 (UIPolygon_t4199244354 * __this, VertexHelper_t385374196 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
