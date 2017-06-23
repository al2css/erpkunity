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

// UnityEngine.UI.Extensions.SaveGame
struct SaveGame_t2719748331;
// System.String
struct String_t;
// System.Runtime.Serialization.SurrogateSelector
struct SurrogateSelector_t3321182695;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_SaveGa2719748331.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_SurrogateSel3321182695.h"

// System.Void UnityEngine.UI.Extensions.SaveLoad::Save(UnityEngine.UI.Extensions.SaveGame)
extern "C"  void SaveLoad_Save_m630913736 (Il2CppObject * __this /* static, unused */, SaveGame_t2719748331 * ___saveGame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.SaveGame UnityEngine.UI.Extensions.SaveLoad::Load(System.String)
extern "C"  SaveGame_t2719748331 * SaveLoad_Load_m2169040380 (Il2CppObject * __this /* static, unused */, String_t* ___gameToLoad0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoad::AddSurrogates(System.Runtime.Serialization.SurrogateSelector&)
extern "C"  void SaveLoad_AddSurrogates_m4243716825 (Il2CppObject * __this /* static, unused */, SurrogateSelector_t3321182695 ** ___ss0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoad::CheckPath(System.String)
extern "C"  void SaveLoad_CheckPath_m4270656376 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.SaveLoad::.cctor()
extern "C"  void SaveLoad__cctor_m3691018600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
