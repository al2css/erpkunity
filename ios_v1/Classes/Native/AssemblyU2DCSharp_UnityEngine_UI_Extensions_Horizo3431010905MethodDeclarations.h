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

// UnityEngine.UI.Extensions.HorizontalScrollSnap
struct HorizontalScrollSnap_t3431010905;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::.ctor()
extern "C"  void HorizontalScrollSnap__ctor_m2504637133 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::Start()
extern "C"  void HorizontalScrollSnap_Start_m2384912037 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::Update()
extern "C"  void HorizontalScrollSnap_Update_m1657024612 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.HorizontalScrollSnap::IsRectMovingSlowerThanThreshold(System.Single)
extern "C"  bool HorizontalScrollSnap_IsRectMovingSlowerThanThreshold_m2209410548 (HorizontalScrollSnap_t3431010905 * __this, float ___startingSpeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::DistributePages()
extern "C"  void HorizontalScrollSnap_DistributePages_m660388920 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::AddChild(UnityEngine.GameObject)
extern "C"  void HorizontalScrollSnap_AddChild_m2576440352 (HorizontalScrollSnap_t3431010905 * __this, GameObject_t1756533147 * ___GO0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::AddChild(UnityEngine.GameObject,System.Boolean)
extern "C"  void HorizontalScrollSnap_AddChild_m1142591877 (HorizontalScrollSnap_t3431010905 * __this, GameObject_t1756533147 * ___GO0, bool ___WorldPositionStays1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::RemoveChild(System.Int32,UnityEngine.GameObject&)
extern "C"  void HorizontalScrollSnap_RemoveChild_m1251295662 (HorizontalScrollSnap_t3431010905 * __this, int32_t ___index0, GameObject_t1756533147 ** ___ChildRemoved1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::RemoveAllChildren(UnityEngine.GameObject[]&)
extern "C"  void HorizontalScrollSnap_RemoveAllChildren_m2965993921 (HorizontalScrollSnap_t3431010905 * __this, GameObjectU5BU5D_t3057952154** ___ChildrenRemoved0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::SetScrollContainerPosition()
extern "C"  void HorizontalScrollSnap_SetScrollContainerPosition_m3639610762 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::UpdateLayout()
extern "C"  void HorizontalScrollSnap_UpdateLayout_m184637238 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::OnRectTransformDimensionsChange()
extern "C"  void HorizontalScrollSnap_OnRectTransformDimensionsChange_m3422981005 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void HorizontalScrollSnap_OnEndDrag_m3163106455 (HorizontalScrollSnap_t3431010905 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
