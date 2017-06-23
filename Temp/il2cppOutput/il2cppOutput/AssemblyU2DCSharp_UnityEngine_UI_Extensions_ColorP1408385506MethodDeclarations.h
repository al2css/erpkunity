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

// UnityEngine.UI.Extensions.ColorPicker.HexColorField
struct HexColorField_t1408385506;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// System.Void UnityEngine.UI.Extensions.ColorPicker.HexColorField::.ctor()
extern "C"  void HexColorField__ctor_m4134861133 (HexColorField_t1408385506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ColorPicker.HexColorField::Awake()
extern "C"  void HexColorField_Awake_m1235694254 (HexColorField_t1408385506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ColorPicker.HexColorField::OnDestroy()
extern "C"  void HexColorField_OnDestroy_m801911676 (HexColorField_t1408385506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ColorPicker.HexColorField::UpdateHex(UnityEngine.Color)
extern "C"  void HexColorField_UpdateHex_m2762242283 (HexColorField_t1408385506 * __this, Color_t2020392075  ___newColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ColorPicker.HexColorField::UpdateColor(System.String)
extern "C"  void HexColorField_UpdateColor_m174973935 (HexColorField_t1408385506 * __this, String_t* ___newHex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.Extensions.ColorPicker.HexColorField::ColorToHex(UnityEngine.Color32)
extern "C"  String_t* HexColorField_ColorToHex_m3473194880 (HexColorField_t1408385506 * __this, Color32_t874517518  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Extensions.ColorPicker.HexColorField::HexToColor(System.String,UnityEngine.Color32&)
extern "C"  bool HexColorField_HexToColor_m1040089297 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, Color32_t874517518 * ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
