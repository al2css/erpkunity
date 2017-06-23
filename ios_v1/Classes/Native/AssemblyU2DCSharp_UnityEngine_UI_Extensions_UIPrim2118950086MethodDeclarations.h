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

// UnityEngine.UI.Extensions.UIPrimitiveBase
struct UIPrimitiveBase_t2118950086;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t3048644023;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void UnityEngine.UI.Extensions.UIPrimitiveBase::.ctor()
extern "C"  void UIPrimitiveBase__ctor_m3894204574 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Extensions.UIPrimitiveBase::get_sprite()
extern "C"  Sprite_t309593783 * UIPrimitiveBase_get_sprite_m2281503723 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPrimitiveBase::set_sprite(UnityEngine.Sprite)
extern "C"  void UIPrimitiveBase_set_sprite_m3282609374 (UIPrimitiveBase_t2118950086 * __this, Sprite_t309593783 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Extensions.UIPrimitiveBase::get_overrideSprite()
extern "C"  Sprite_t309593783 * UIPrimitiveBase_get_overrideSprite_m1497893911 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPrimitiveBase::set_overrideSprite(UnityEngine.Sprite)
extern "C"  void UIPrimitiveBase_set_overrideSprite_m1829003146 (UIPrimitiveBase_t2118950086 * __this, Sprite_t309593783 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.UIPrimitiveBase::get_eventAlphaThreshold()
extern "C"  float UIPrimitiveBase_get_eventAlphaThreshold_m1008842960 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPrimitiveBase::set_eventAlphaThreshold(System.Single)
extern "C"  void UIPrimitiveBase_set_eventAlphaThreshold_m3812276077 (UIPrimitiveBase_t2118950086 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Extensions.UIPrimitiveBase::get_mainTexture()
extern "C"  Texture_t2243626319 * UIPrimitiveBase_get_mainTexture_m2136507342 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.UIPrimitiveBase::get_pixelsPerUnit()
extern "C"  float UIPrimitiveBase_get_pixelsPerUnit_m409439051 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] UnityEngine.UI.Extensions.UIPrimitiveBase::SetVbo(UnityEngine.Vector2[],UnityEngine.Vector2[])
extern "C"  UIVertexU5BU5D_t3048644023* UIPrimitiveBase_SetVbo_m1570549445 (UIPrimitiveBase_t2118950086 * __this, Vector2U5BU5D_t686124026* ___vertices0, Vector2U5BU5D_t686124026* ___uvs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPrimitiveBase::CalculateLayoutInputHorizontal()
extern "C"  void UIPrimitiveBase_CalculateLayoutInputHorizontal_m3874466374 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.UIPrimitiveBase::CalculateLayoutInputVertical()
extern "C"  void UIPrimitiveBase_CalculateLayoutInputVertical_m3635172664 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.UIPrimitiveBase::get_minWidth()
extern "C"  float UIPrimitiveBase_get_minWidth_m1456650057 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.UIPrimitiveBase::get_preferredWidth()
extern "C"  float UIPrimitiveBase_get_preferredWidth_m2449151772 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.UIPrimitiveBase::get_flexibleWidth()
extern "C"  float UIPrimitiveBase_get_flexibleWidth_m1221417342 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.UIPrimitiveBase::get_minHeight()
extern "C"  float UIPrimitiveBase_get_minHeight_m3779427852 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.UIPrimitiveBase::get_preferredHeight()
extern "C"  float UIPrimitiveBase_get_preferredHeight_m3865863099 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.UIPrimitiveBase::get_flexibleHeight()
extern "C"  float UIPrimitiveBase_get_flexibleHeight_m1470286899 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.UIPrimitiveBase::get_layoutPriority()
extern "C"  int32_t UIPrimitiveBase_get_layoutPriority_m2588076465 (UIPrimitiveBase_t2118950086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.UIPrimitiveBase::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool UIPrimitiveBase_IsRaycastLocationValid_m2842617330 (UIPrimitiveBase_t2118950086 * __this, Vector2_t2243707579  ___screenPoint0, Camera_t189460977 * ___eventCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Extensions.UIPrimitiveBase::MapCoordinate(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  Vector2_t2243707579  UIPrimitiveBase_MapCoordinate_m895383740 (UIPrimitiveBase_t2118950086 * __this, Vector2_t2243707579  ___local0, Rect_t3681755626  ___rect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Extensions.UIPrimitiveBase::GetAdjustedBorders(UnityEngine.Vector4,UnityEngine.Rect)
extern "C"  Vector4_t2243707581  UIPrimitiveBase_GetAdjustedBorders_m1617271459 (UIPrimitiveBase_t2118950086 * __this, Vector4_t2243707581  ___border0, Rect_t3681755626  ___rect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
