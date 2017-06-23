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

// UnityEngine.UI.Extensions.ScrollSnap
struct ScrollSnap_t2261190493;
// UnityEngine.UI.Extensions.ScrollSnap/PageSnapChange
struct PageSnapChange_t737912504;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_ScrollS737912504.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.UI.Extensions.ScrollSnap::.ctor()
extern "C"  void ScrollSnap__ctor_m11979583 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::add_onPageChange(UnityEngine.UI.Extensions.ScrollSnap/PageSnapChange)
extern "C"  void ScrollSnap_add_onPageChange_m1179216563 (ScrollSnap_t2261190493 * __this, PageSnapChange_t737912504 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::remove_onPageChange(UnityEngine.UI.Extensions.ScrollSnap/PageSnapChange)
extern "C"  void ScrollSnap_remove_onPageChange_m3162925380 (ScrollSnap_t2261190493 * __this, PageSnapChange_t737912504 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::Awake()
extern "C"  void ScrollSnap_Awake_m3677947402 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::Start()
extern "C"  void ScrollSnap_Start_m415319307 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::UpdateListItemsSize()
extern "C"  void ScrollSnap_UpdateListItemsSize_m4226127231 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::UpdateListItemPositions()
extern "C"  void ScrollSnap_UpdateListItemPositions_m971319323 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::ResetPage()
extern "C"  void ScrollSnap_ResetPage_m4039710381 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::UpdateScrollbar(System.Boolean)
extern "C"  void ScrollSnap_UpdateScrollbar_m4252970425 (ScrollSnap_t2261190493 * __this, bool ___linkSteps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::LateUpdate()
extern "C"  void ScrollSnap_LateUpdate_m192876348 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::NextScreen()
extern "C"  void ScrollSnap_NextScreen_m1164524096 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::PreviousScreen()
extern "C"  void ScrollSnap_PreviousScreen_m1833652492 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::NextScreenCommand()
extern "C"  void ScrollSnap_NextScreenCommand_m512586635 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::PrevScreenCommand()
extern "C"  void ScrollSnap_PrevScreenCommand_m1142993633 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.ScrollSnap::CurrentPage()
extern "C"  int32_t ScrollSnap_CurrentPage_m1288061963 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::ChangePage(System.Int32)
extern "C"  void ScrollSnap_ChangePage_m219198615 (ScrollSnap_t2261190493 * __this, int32_t ___page0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::PageChanged(System.Int32)
extern "C"  void ScrollSnap_PageChanged_m1954492675 (ScrollSnap_t2261190493 * __this, int32_t ___currentPage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollSnap_OnBeginDrag_m3903790265 (ScrollSnap_t2261190493 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollSnap_OnEndDrag_m1209034613 (ScrollSnap_t2261190493 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollSnap_OnDrag_m4105505582 (ScrollSnap_t2261190493 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::<Awake>m__0()
extern "C"  void ScrollSnap_U3CAwakeU3Em__0_m4075064045 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnap::<Awake>m__1()
extern "C"  void ScrollSnap_U3CAwakeU3Em__1_m4075063950 (ScrollSnap_t2261190493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
