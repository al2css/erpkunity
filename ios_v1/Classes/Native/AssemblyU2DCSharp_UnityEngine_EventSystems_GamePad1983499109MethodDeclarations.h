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

// UnityEngine.EventSystems.GamePadInputModule
struct GamePadInputModule_t1983499109;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UnityEngine.EventSystems.GamePadInputModule::.ctor()
extern "C"  void GamePadInputModule__ctor_m3117156987 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.GamePadInputModule::get_inputActionsPerSecond()
extern "C"  float GamePadInputModule_get_inputActionsPerSecond_m1421681888 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::set_inputActionsPerSecond(System.Single)
extern "C"  void GamePadInputModule_set_inputActionsPerSecond_m1326667187 (GamePadInputModule_t1983499109 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.GamePadInputModule::get_repeatDelay()
extern "C"  float GamePadInputModule_get_repeatDelay_m3347508256 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::set_repeatDelay(System.Single)
extern "C"  void GamePadInputModule_set_repeatDelay_m605295853 (GamePadInputModule_t1983499109 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.GamePadInputModule::get_horizontalAxis()
extern "C"  String_t* GamePadInputModule_get_horizontalAxis_m3936596184 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::set_horizontalAxis(System.String)
extern "C"  void GamePadInputModule_set_horizontalAxis_m2927702277 (GamePadInputModule_t1983499109 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.GamePadInputModule::get_verticalAxis()
extern "C"  String_t* GamePadInputModule_get_verticalAxis_m1762451046 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::set_verticalAxis(System.String)
extern "C"  void GamePadInputModule_set_verticalAxis_m2380806521 (GamePadInputModule_t1983499109 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.GamePadInputModule::get_submitButton()
extern "C"  String_t* GamePadInputModule_get_submitButton_m3862226249 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::set_submitButton(System.String)
extern "C"  void GamePadInputModule_set_submitButton_m2753069052 (GamePadInputModule_t1983499109 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.GamePadInputModule::get_cancelButton()
extern "C"  String_t* GamePadInputModule_get_cancelButton_m1892869947 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::set_cancelButton(System.String)
extern "C"  void GamePadInputModule_set_cancelButton_m4120226414 (GamePadInputModule_t1983499109 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.GamePadInputModule::ShouldActivateModule()
extern "C"  bool GamePadInputModule_ShouldActivateModule_m774569733 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::ActivateModule()
extern "C"  void GamePadInputModule_ActivateModule_m3181077586 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::DeactivateModule()
extern "C"  void GamePadInputModule_DeactivateModule_m179520705 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.GamePadInputModule::Process()
extern "C"  void GamePadInputModule_Process_m3972427142 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.GamePadInputModule::SendSubmitEventToSelectedObject()
extern "C"  bool GamePadInputModule_SendSubmitEventToSelectedObject_m725955324 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.GamePadInputModule::GetRawMoveVector()
extern "C"  Vector2_t2243707579  GamePadInputModule_GetRawMoveVector_m3095157486 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.GamePadInputModule::SendMoveEventToSelectedObject()
extern "C"  bool GamePadInputModule_SendMoveEventToSelectedObject_m1766014293 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.GamePadInputModule::SendUpdateEventToSelectedObject()
extern "C"  bool GamePadInputModule_SendUpdateEventToSelectedObject_m1567442817 (GamePadInputModule_t1983499109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
