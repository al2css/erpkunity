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

// UnityEngine.EventSystems.Extensions.AimerInputModule
struct AimerInputModule_t1926645740;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.EventSystems.Extensions.AimerInputModule::.ctor()
extern "C"  void AimerInputModule__ctor_m4224618532 (AimerInputModule_t1926645740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Extensions.AimerInputModule::ActivateModule()
extern "C"  void AimerInputModule_ActivateModule_m3258767689 (AimerInputModule_t1926645740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Extensions.AimerInputModule::Process()
extern "C"  void AimerInputModule_Process_m1789573589 (AimerInputModule_t1926645740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.Extensions.AimerInputModule::GetAimerPointerEventData()
extern "C"  PointerEventData_t1599784723 * AimerInputModule_GetAimerPointerEventData_m4024414688 (AimerInputModule_t1926645740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Extensions.AimerInputModule::ProcessInteraction(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C"  void AimerInputModule_ProcessInteraction_m4106509199 (AimerInputModule_t1926645740 * __this, PointerEventData_t1599784723 * ___pointer0, bool ___pressed1, bool ___released2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Extensions.AimerInputModule::DeactivateModule()
extern "C"  void AimerInputModule_DeactivateModule_m1112679852 (AimerInputModule_t1926645740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
