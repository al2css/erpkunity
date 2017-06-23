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

// UnityEngine.UI.Extensions.VerticalScrollSnap
struct VerticalScrollSnap_t4045580255;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::.ctor()
extern "C"  void VerticalScrollSnap__ctor_m3893998857 (VerticalScrollSnap_t4045580255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::Start()
extern "C"  void VerticalScrollSnap_Start_m749198713 (VerticalScrollSnap_t4045580255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::Update()
extern "C"  void VerticalScrollSnap_Update_m4252638074 (VerticalScrollSnap_t4045580255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.VerticalScrollSnap::IsRectMovingSlowerThanThreshold(System.Single)
extern "C"  bool VerticalScrollSnap_IsRectMovingSlowerThanThreshold_m831859306 (VerticalScrollSnap_t4045580255 * __this, float ___startingSpeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::DistributePages()
extern "C"  void VerticalScrollSnap_DistributePages_m2413216774 (VerticalScrollSnap_t4045580255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::AddChild(UnityEngine.GameObject)
extern "C"  void VerticalScrollSnap_AddChild_m2528611790 (VerticalScrollSnap_t4045580255 * __this, GameObject_t1756533147 * ___GO0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::AddChild(UnityEngine.GameObject,System.Boolean)
extern "C"  void VerticalScrollSnap_AddChild_m589185097 (VerticalScrollSnap_t4045580255 * __this, GameObject_t1756533147 * ___GO0, bool ___WorldPositionStays1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::RemoveChild(System.Int32,UnityEngine.GameObject&)
extern "C"  void VerticalScrollSnap_RemoveChild_m79099800 (VerticalScrollSnap_t4045580255 * __this, int32_t ___index0, GameObject_t1756533147 ** ___ChildRemoved1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::RemoveAllChildren(UnityEngine.GameObject[]&)
extern "C"  void VerticalScrollSnap_RemoveAllChildren_m3912186661 (VerticalScrollSnap_t4045580255 * __this, GameObjectU5BU5D_t3057952154** ___ChildrenRemoved0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::SetScrollContainerPosition()
extern "C"  void VerticalScrollSnap_SetScrollContainerPosition_m201899020 (VerticalScrollSnap_t4045580255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::UpdateLayout()
extern "C"  void VerticalScrollSnap_UpdateLayout_m3857238024 (VerticalScrollSnap_t4045580255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::OnRectTransformDimensionsChange()
extern "C"  void VerticalScrollSnap_OnRectTransformDimensionsChange_m657805577 (VerticalScrollSnap_t4045580255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.VerticalScrollSnap::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VerticalScrollSnap_OnEndDrag_m3844237047 (VerticalScrollSnap_t4045580255 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
