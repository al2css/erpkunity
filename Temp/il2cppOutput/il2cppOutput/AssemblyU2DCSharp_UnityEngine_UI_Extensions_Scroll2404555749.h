﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.ScrollRectEx/<OnDrag>c__AnonStorey1
struct  U3COnDragU3Ec__AnonStorey1_t2404555749  : public Il2CppObject
{
public:
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.Extensions.ScrollRectEx/<OnDrag>c__AnonStorey1::eventData
	PointerEventData_t1599784723 * ___eventData_0;

public:
	inline static int32_t get_offset_of_eventData_0() { return static_cast<int32_t>(offsetof(U3COnDragU3Ec__AnonStorey1_t2404555749, ___eventData_0)); }
	inline PointerEventData_t1599784723 * get_eventData_0() const { return ___eventData_0; }
	inline PointerEventData_t1599784723 ** get_address_of_eventData_0() { return &___eventData_0; }
	inline void set_eventData_0(PointerEventData_t1599784723 * value)
	{
		___eventData_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
