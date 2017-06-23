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

// UnityEngine.UI.Extensions.NicerOutline
struct NicerOutline_t710191709;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t573379950;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t385374196;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper385374196.h"

// System.Void UnityEngine.UI.Extensions.NicerOutline::.ctor()
extern "C"  void NicerOutline__ctor_m2623128161 (NicerOutline_t710191709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Extensions.NicerOutline::get_effectColor()
extern "C"  Color_t2020392075  NicerOutline_get_effectColor_m1206778755 (NicerOutline_t710191709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.NicerOutline::set_effectColor(UnityEngine.Color)
extern "C"  void NicerOutline_set_effectColor_m404755666 (NicerOutline_t710191709 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Extensions.NicerOutline::get_effectDistance()
extern "C"  Vector2_t2243707579  NicerOutline_get_effectDistance_m3507142843 (NicerOutline_t710191709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.NicerOutline::set_effectDistance(UnityEngine.Vector2)
extern "C"  void NicerOutline_set_effectDistance_m3252890570 (NicerOutline_t710191709 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.NicerOutline::get_useGraphicAlpha()
extern "C"  bool NicerOutline_get_useGraphicAlpha_m3253571321 (NicerOutline_t710191709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.NicerOutline::set_useGraphicAlpha(System.Boolean)
extern "C"  void NicerOutline_set_useGraphicAlpha_m933420744 (NicerOutline_t710191709 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.NicerOutline::ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void NicerOutline_ApplyShadowZeroAlloc_m2635135356 (NicerOutline_t710191709 * __this, List_1_t573379950 * ___verts0, Color32_t874517518  ___color1, int32_t ___start2, int32_t ___end3, float ___x4, float ___y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.NicerOutline::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void NicerOutline_ApplyShadow_m37836421 (NicerOutline_t710191709 * __this, List_1_t573379950 * ___verts0, Color32_t874517518  ___color1, int32_t ___start2, int32_t ___end3, float ___x4, float ___y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.NicerOutline::ModifyMesh(UnityEngine.UI.VertexHelper)
extern "C"  void NicerOutline_ModifyMesh_m514784213 (NicerOutline_t710191709 * __this, VertexHelper_t385374196 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
