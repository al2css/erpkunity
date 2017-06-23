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

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t3443095683;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.UI.Extensions.Tweens.FloatTween
struct FloatTween_t798271509;
struct FloatTween_t798271509_marshaled_pinvoke;
struct FloatTween_t798271509_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_Tweens_798271509.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"

// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_startFloat()
extern "C"  float FloatTween_get_startFloat_m971130116 (FloatTween_t798271509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_startFloat(System.Single)
extern "C"  void FloatTween_set_startFloat_m1864506163 (FloatTween_t798271509 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_targetFloat()
extern "C"  float FloatTween_get_targetFloat_m1265254173 (FloatTween_t798271509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_targetFloat(System.Single)
extern "C"  void FloatTween_set_targetFloat_m3919054576 (FloatTween_t798271509 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_duration()
extern "C"  float FloatTween_get_duration_m589446558 (FloatTween_t798271509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_duration(System.Single)
extern "C"  void FloatTween_set_duration_m213099505 (FloatTween_t798271509 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::get_ignoreTimeScale()
extern "C"  bool FloatTween_get_ignoreTimeScale_m2161606287 (FloatTween_t798271509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_ignoreTimeScale(System.Boolean)
extern "C"  void FloatTween_set_ignoreTimeScale_m279408936 (FloatTween_t798271509 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::TweenValue(System.Single)
extern "C"  void FloatTween_TweenValue_m3667249810 (FloatTween_t798271509 * __this, float ___floatPercentage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::AddOnChangedCallback(UnityEngine.Events.UnityAction`1<System.Single>)
extern "C"  void FloatTween_AddOnChangedCallback_m145415513 (FloatTween_t798271509 * __this, UnityAction_1_t3443095683 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::AddOnFinishCallback(UnityEngine.Events.UnityAction)
extern "C"  void FloatTween_AddOnFinishCallback_m3376737842 (FloatTween_t798271509 * __this, UnityAction_t4025899511 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::GetIgnoreTimescale()
extern "C"  bool FloatTween_GetIgnoreTimescale_m2827175376 (FloatTween_t798271509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::GetDuration()
extern "C"  float FloatTween_GetDuration_m395021033 (FloatTween_t798271509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::ValidTarget()
extern "C"  bool FloatTween_ValidTarget_m3395023492 (FloatTween_t798271509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::Finished()
extern "C"  void FloatTween_Finished_m3434189233 (FloatTween_t798271509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct FloatTween_t798271509;
struct FloatTween_t798271509_marshaled_pinvoke;

extern "C" void FloatTween_t798271509_marshal_pinvoke(const FloatTween_t798271509& unmarshaled, FloatTween_t798271509_marshaled_pinvoke& marshaled);
extern "C" void FloatTween_t798271509_marshal_pinvoke_back(const FloatTween_t798271509_marshaled_pinvoke& marshaled, FloatTween_t798271509& unmarshaled);
extern "C" void FloatTween_t798271509_marshal_pinvoke_cleanup(FloatTween_t798271509_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct FloatTween_t798271509;
struct FloatTween_t798271509_marshaled_com;

extern "C" void FloatTween_t798271509_marshal_com(const FloatTween_t798271509& unmarshaled, FloatTween_t798271509_marshaled_com& marshaled);
extern "C" void FloatTween_t798271509_marshal_com_back(const FloatTween_t798271509_marshaled_com& marshaled, FloatTween_t798271509& unmarshaled);
extern "C" void FloatTween_t798271509_marshal_com_cleanup(FloatTween_t798271509_marshaled_com& marshaled);
