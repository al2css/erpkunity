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

// Facebook.Unity.FacebookScheduler
struct FacebookScheduler_t3329969041;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void Facebook.Unity.FacebookScheduler::.ctor()
extern "C"  void FacebookScheduler__ctor_m1159727132 (FacebookScheduler_t3329969041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookScheduler::Schedule(System.Action,System.Int64)
extern "C"  void FacebookScheduler_Schedule_m1541501704 (FacebookScheduler_t3329969041 * __this, Action_t3226471752 * ___action0, int64_t ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.Unity.FacebookScheduler::DelayEvent(System.Action,System.Int64)
extern "C"  Il2CppObject * FacebookScheduler_DelayEvent_m3491670402 (FacebookScheduler_t3329969041 * __this, Action_t3226471752 * ___action0, int64_t ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
