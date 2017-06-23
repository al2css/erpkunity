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

// UnityEngine.UI.Extensions.SaveLoadMenu
struct SaveLoadMenu_t3541125646;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// UnityEngine.UI.Extensions.SceneObject
struct SceneObject_t966911541;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Extensions.ObjectComponent
struct ObjectComponent_t3135580000;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_SceneOb966911541.h"

// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::.ctor()
extern "C"  void SaveLoadMenu__ctor_m320911992 (SaveLoadMenu_t3541125646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::Start()
extern "C"  void SaveLoadMenu_Start_m1681568764 (SaveLoadMenu_t3541125646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::Update()
extern "C"  void SaveLoadMenu_Update_m177730719 (SaveLoadMenu_t3541125646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::OnGUI()
extern "C"  void SaveLoadMenu_OnGUI_m3152203824 (SaveLoadMenu_t3541125646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Extensions.SaveLoadMenu::wait(System.Single)
extern "C"  Il2CppObject * SaveLoadMenu_wait_m3568591812 (SaveLoadMenu_t3541125646 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::SaveGame()
extern "C"  void SaveLoadMenu_SaveGame_m557951169 (SaveLoadMenu_t3541125646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::SaveGame(System.String)
extern "C"  void SaveLoadMenu_SaveGame_m2767809327 (SaveLoadMenu_t3541125646 * __this, String_t* ___saveGameName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::LoadGame()
extern "C"  void SaveLoadMenu_LoadGame_m1520284308 (SaveLoadMenu_t3541125646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::LoadGame(System.String)
extern "C"  void SaveLoadMenu_LoadGame_m1943456146 (SaveLoadMenu_t3541125646 * __this, String_t* ___saveGameName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::ClearScene()
extern "C"  void SaveLoadMenu_ClearScene_m976317149 (SaveLoadMenu_t3541125646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.SceneObject UnityEngine.UI.Extensions.SaveLoadMenu::PackGameObject(UnityEngine.GameObject)
extern "C"  SceneObject_t966911541 * SaveLoadMenu_PackGameObject_m38879785 (SaveLoadMenu_t3541125646 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.ObjectComponent UnityEngine.UI.Extensions.SaveLoadMenu::PackComponent(System.Object)
extern "C"  ObjectComponent_t3135580000 * SaveLoadMenu_PackComponent_m166469664 (SaveLoadMenu_t3541125646 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Extensions.SaveLoadMenu::UnpackGameObject(UnityEngine.UI.Extensions.SceneObject)
extern "C"  GameObject_t1756533147 * SaveLoadMenu_UnpackGameObject_m3777923116 (SaveLoadMenu_t3541125646 * __this, SceneObject_t966911541 * ___sceneObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoadMenu::UnpackComponents(UnityEngine.GameObject&,UnityEngine.UI.Extensions.SceneObject)
extern "C"  void SaveLoadMenu_UnpackComponents_m3561186968 (SaveLoadMenu_t3541125646 * __this, GameObject_t1756533147 ** ___go0, SceneObject_t966911541 * ___sceneObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
