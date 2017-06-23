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

// UnityEngine.UI.Extensions.ScrollSnapBase
struct ScrollSnapBase_t805675194;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeStartEvent
struct SelectionChangeStartEvent_t1331424750;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionPageChangedEvent
struct SelectionPageChangedEvent_t3967268665;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeEndEvent
struct SelectionChangeEndEvent_t3994187929;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_Scroll1331424750.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_Scroll3967268665.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_Scroll3994187929.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::.ctor()
extern "C"  void ScrollSnapBase__ctor_m4068037946 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::get_CurrentPage()
extern "C"  int32_t ScrollSnapBase_get_CurrentPage_m3936457359 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::set_CurrentPage(System.Int32)
extern "C"  void ScrollSnapBase_set_CurrentPage_m3237736682 (ScrollSnapBase_t805675194 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeStartEvent UnityEngine.UI.Extensions.ScrollSnapBase::get_OnSelectionChangeStartEvent()
extern "C"  SelectionChangeStartEvent_t1331424750 * ScrollSnapBase_get_OnSelectionChangeStartEvent_m4255256219 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::set_OnSelectionChangeStartEvent(UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeStartEvent)
extern "C"  void ScrollSnapBase_set_OnSelectionChangeStartEvent_m2902775658 (ScrollSnapBase_t805675194 * __this, SelectionChangeStartEvent_t1331424750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionPageChangedEvent UnityEngine.UI.Extensions.ScrollSnapBase::get_OnSelectionPageChangedEvent()
extern "C"  SelectionPageChangedEvent_t3967268665 * ScrollSnapBase_get_OnSelectionPageChangedEvent_m4056820603 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::set_OnSelectionPageChangedEvent(UnityEngine.UI.Extensions.ScrollSnapBase/SelectionPageChangedEvent)
extern "C"  void ScrollSnapBase_set_OnSelectionPageChangedEvent_m2107008832 (ScrollSnapBase_t805675194 * __this, SelectionPageChangedEvent_t3967268665 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeEndEvent UnityEngine.UI.Extensions.ScrollSnapBase::get_OnSelectionChangeEndEvent()
extern "C"  SelectionChangeEndEvent_t3994187929 * ScrollSnapBase_get_OnSelectionChangeEndEvent_m2308052155 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::set_OnSelectionChangeEndEvent(UnityEngine.UI.Extensions.ScrollSnapBase/SelectionChangeEndEvent)
extern "C"  void ScrollSnapBase_set_OnSelectionChangeEndEvent_m2976820272 (ScrollSnapBase_t805675194 * __this, SelectionChangeEndEvent_t3994187929 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::Awake()
extern "C"  void ScrollSnapBase_Awake_m1658764615 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::InitialiseChildObjectsFromScene()
extern "C"  void ScrollSnapBase_InitialiseChildObjectsFromScene_m682551771 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::InitialiseChildObjectsFromArray()
extern "C"  void ScrollSnapBase_InitialiseChildObjectsFromArray_m1817793592 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::UpdateVisible()
extern "C"  void ScrollSnapBase_UpdateVisible_m4101541753 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::NextScreen()
extern "C"  void ScrollSnapBase_NextScreen_m3053528901 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::PreviousScreen()
extern "C"  void ScrollSnapBase_PreviousScreen_m2149735471 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::GoToScreen(System.Int32)
extern "C"  void ScrollSnapBase_GoToScreen_m3613387434 (ScrollSnapBase_t805675194 * __this, int32_t ___screenIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.ScrollSnapBase::GetPageforPosition(UnityEngine.Vector3)
extern "C"  int32_t ScrollSnapBase_GetPageforPosition_m423346264 (ScrollSnapBase_t805675194 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.ScrollSnapBase::IsRectSettledOnaPage(UnityEngine.Vector3)
extern "C"  bool ScrollSnapBase_IsRectSettledOnaPage_m1723448641 (ScrollSnapBase_t805675194 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::GetPositionforPage(System.Int32,UnityEngine.Vector3&)
extern "C"  void ScrollSnapBase_GetPositionforPage_m335466935 (ScrollSnapBase_t805675194 * __this, int32_t ___page0, Vector3_t2243707580 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::ScrollToClosestElement()
extern "C"  void ScrollSnapBase_ScrollToClosestElement_m3777430547 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::ChangeBulletsInfo(System.Int32)
extern "C"  void ScrollSnapBase_ChangeBulletsInfo_m3261101666 (ScrollSnapBase_t805675194 * __this, int32_t ___targetScreen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::OnValidate()
extern "C"  void ScrollSnapBase_OnValidate_m2625356609 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::StartScreenChange()
extern "C"  void ScrollSnapBase_StartScreenChange_m562806390 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::ScreenChange()
extern "C"  void ScrollSnapBase_ScreenChange_m3634072880 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::EndScreenChange()
extern "C"  void ScrollSnapBase_EndScreenChange_m3448588423 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollSnapBase_OnBeginDrag_m2349260790 (ScrollSnapBase_t805675194 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollSnapBase_OnDrag_m1878534219 (ScrollSnapBase_t805675194 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::<Awake>m__0()
extern "C"  void ScrollSnapBase_U3CAwakeU3Em__0_m327509290 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollSnapBase::<Awake>m__1()
extern "C"  void ScrollSnapBase_U3CAwakeU3Em__1_m327509385 (ScrollSnapBase_t805675194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
