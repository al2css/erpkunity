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

// Facebook.Unity.IFacebookLogger
struct IFacebookLogger_t1451379;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Facebook.Unity.FacebookLogger::.cctor()
extern "C"  void FacebookLogger__cctor_m3868196502 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookLogger Facebook.Unity.FacebookLogger::get_Instance()
extern "C"  Il2CppObject * FacebookLogger_get_Instance_m1210463424 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::set_Instance(Facebook.Unity.IFacebookLogger)
extern "C"  void FacebookLogger_set_Instance_m3903236095 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Log(System.String)
extern "C"  void FacebookLogger_Log_m502362239 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Info(System.String)
extern "C"  void FacebookLogger_Info_m2898318453 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String)
extern "C"  void FacebookLogger_Warn_m3666801981 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String,System.String[])
extern "C"  void FacebookLogger_Warn_m3395822361 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t1642385972* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
