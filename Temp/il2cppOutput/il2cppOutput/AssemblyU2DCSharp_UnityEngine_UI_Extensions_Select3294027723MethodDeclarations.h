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

// UnityEngine.UI.Extensions.SelectionBox
struct SelectionBox_t3294027723;
// System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour>
struct IEnumerable_1_t1450457017;
// UnityEngine.UI.Extensions.IBoxSelectable
struct IBoxSelectable_t1633048368;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Extensions.IBoxSelectable[]
struct IBoxSelectableU5BU5D_t1290335761;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

// System.Void UnityEngine.UI.Extensions.SelectionBox::.ctor()
extern "C"  void SelectionBox__ctor_m2751466247 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::ValidateCanvas()
extern "C"  void SelectionBox_ValidateCanvas_m1269664037 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::SetSelectableGroup(System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour>)
extern "C"  void SelectionBox_SetSelectableGroup_m1302373022 (SelectionBox_t3294027723 * __this, Il2CppObject* ___behaviourCollection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::CreateBoxRect()
extern "C"  void SelectionBox_CreateBoxRect_m2624603788 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::ResetBoxRect()
extern "C"  void SelectionBox_ResetBoxRect_m4080234323 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::BeginSelection()
extern "C"  void SelectionBox_BeginSelection_m1899501150 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.SelectionBox::PointIsValidAgainstSelectionMask(UnityEngine.Vector2)
extern "C"  bool SelectionBox_PointIsValidAgainstSelectionMask_m4105453518 (SelectionBox_t3294027723 * __this, Vector2_t2243707579  ___screenPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.IBoxSelectable UnityEngine.UI.Extensions.SelectionBox::GetSelectableAtMousePosition()
extern "C"  Il2CppObject * SelectionBox_GetSelectableAtMousePosition_m3527752054 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::DragSelection()
extern "C"  void SelectionBox_DragSelection_m3751024627 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::ApplySingleClickDeselection()
extern "C"  void SelectionBox_ApplySingleClickDeselection_m2454192660 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::ApplyPreSelections()
extern "C"  void SelectionBox_ApplyPreSelections_m709565435 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Extensions.SelectionBox::GetScreenPointOfSelectable(UnityEngine.UI.Extensions.IBoxSelectable)
extern "C"  Vector2_t2243707579  SelectionBox_GetScreenPointOfSelectable_m1216307622 (SelectionBox_t3294027723 * __this, Il2CppObject * ___selectable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.Extensions.SelectionBox::GetScreenPointCamera(UnityEngine.RectTransform)
extern "C"  Camera_t189460977 * SelectionBox_GetScreenPointCamera_m1981346048 (SelectionBox_t3294027723 * __this, RectTransform_t3349966182 * ___rectTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.IBoxSelectable[] UnityEngine.UI.Extensions.SelectionBox::GetAllSelected()
extern "C"  IBoxSelectableU5BU5D_t1290335761* SelectionBox_GetAllSelected_m734100659 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::EndSelection()
extern "C"  void SelectionBox_EndSelection_m1921981378 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::Start()
extern "C"  void SelectionBox_Start_m939579267 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SelectionBox::Update()
extern "C"  void SelectionBox_Update_m3754074198 (SelectionBox_t3294027723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
