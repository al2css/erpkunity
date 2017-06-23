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

// Facebook.Unity.Utilities/Callback`1<System.Object>
struct Callback_1_t1712464442;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_1__ctor_m4046123018_gshared (Callback_1_t1712464442 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Callback_1__ctor_m4046123018(__this, ___object0, ___method1, method) ((  void (*) (Callback_1_t1712464442 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_1__ctor_m4046123018_gshared)(__this, ___object0, ___method1, method)
// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::Invoke(T)
extern "C"  void Callback_1_Invoke_m1539990562_gshared (Callback_1_t1712464442 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define Callback_1_Invoke_m1539990562(__this, ___obj0, method) ((  void (*) (Callback_1_t1712464442 *, Il2CppObject *, const MethodInfo*))Callback_1_Invoke_m1539990562_gshared)(__this, ___obj0, method)
// System.IAsyncResult Facebook.Unity.Utilities/Callback`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_1_BeginInvoke_m2342307435_gshared (Callback_1_t1712464442 * __this, Il2CppObject * ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Callback_1_BeginInvoke_m2342307435(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Callback_1_t1712464442 *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Callback_1_BeginInvoke_m2342307435_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_1_EndInvoke_m603559680_gshared (Callback_1_t1712464442 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Callback_1_EndInvoke_m603559680(__this, ___result0, method) ((  void (*) (Callback_1_t1712464442 *, Il2CppObject *, const MethodInfo*))Callback_1_EndInvoke_m603559680_gshared)(__this, ___result0, method)
