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

// UnityEngine.UI.Extensions.ScrollRectTweener
struct ScrollRectTweener_t3873690283;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::.ctor()
extern "C"  void ScrollRectTweener__ctor_m334408989 (ScrollRectTweener_t3873690283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::Awake()
extern "C"  void ScrollRectTweener_Awake_m2719954996 (ScrollRectTweener_t3873690283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::ScrollHorizontal(System.Single)
extern "C"  void ScrollRectTweener_ScrollHorizontal_m3364188231 (ScrollRectTweener_t3873690283 * __this, float ___normalizedX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::ScrollHorizontal(System.Single,System.Single)
extern "C"  void ScrollRectTweener_ScrollHorizontal_m1752828200 (ScrollRectTweener_t3873690283 * __this, float ___normalizedX0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::ScrollVertical(System.Single)
extern "C"  void ScrollRectTweener_ScrollVertical_m136003303 (ScrollRectTweener_t3873690283 * __this, float ___normalizedY0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::ScrollVertical(System.Single,System.Single)
extern "C"  void ScrollRectTweener_ScrollVertical_m3762119614 (ScrollRectTweener_t3873690283 * __this, float ___normalizedY0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::Scroll(UnityEngine.Vector2)
extern "C"  void ScrollRectTweener_Scroll_m157208694 (ScrollRectTweener_t3873690283 * __this, Vector2_t2243707579  ___normalizedPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.ScrollRectTweener::GetScrollDuration(UnityEngine.Vector2)
extern "C"  float ScrollRectTweener_GetScrollDuration_m3536036664 (ScrollRectTweener_t3873690283 * __this, Vector2_t2243707579  ___normalizedPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Extensions.ScrollRectTweener::DeNormalize(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  ScrollRectTweener_DeNormalize_m4081804350 (ScrollRectTweener_t3873690283 * __this, Vector2_t2243707579  ___normalizedPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Extensions.ScrollRectTweener::GetCurrentPos()
extern "C"  Vector2_t2243707579  ScrollRectTweener_GetCurrentPos_m2817637829 (ScrollRectTweener_t3873690283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::Scroll(UnityEngine.Vector2,System.Single)
extern "C"  void ScrollRectTweener_Scroll_m1052122501 (ScrollRectTweener_t3873690283 * __this, Vector2_t2243707579  ___normalizedPos0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Extensions.ScrollRectTweener::DoMove(System.Single)
extern "C"  Il2CppObject * ScrollRectTweener_DoMove_m1965607596 (ScrollRectTweener_t3873690283 * __this, float ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Extensions.ScrollRectTweener::EaseVector(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  ScrollRectTweener_EaseVector_m1757471613 (ScrollRectTweener_t3873690283 * __this, float ___currentTime0, Vector2_t2243707579  ___startValue1, Vector2_t2243707579  ___changeInValue2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRectTweener_OnDrag_m3439213452 (ScrollRectTweener_t3873690283 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::StopScroll()
extern "C"  void ScrollRectTweener_StopScroll_m1926687086 (ScrollRectTweener_t3873690283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::LockScrollability()
extern "C"  void ScrollRectTweener_LockScrollability_m667486697 (ScrollRectTweener_t3873690283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectTweener::RestoreScrollability()
extern "C"  void ScrollRectTweener_RestoreScrollability_m3372740224 (ScrollRectTweener_t3873690283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
