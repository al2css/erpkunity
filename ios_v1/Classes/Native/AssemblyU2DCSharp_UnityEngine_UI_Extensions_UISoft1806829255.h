﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t540192618;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UISoftAdditiveEffect
struct  UISoftAdditiveEffect_t1806829255  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.MaskableGraphic UnityEngine.UI.Extensions.UISoftAdditiveEffect::mGraphic
	MaskableGraphic_t540192618 * ___mGraphic_2;

public:
	inline static int32_t get_offset_of_mGraphic_2() { return static_cast<int32_t>(offsetof(UISoftAdditiveEffect_t1806829255, ___mGraphic_2)); }
	inline MaskableGraphic_t540192618 * get_mGraphic_2() const { return ___mGraphic_2; }
	inline MaskableGraphic_t540192618 ** get_address_of_mGraphic_2() { return &___mGraphic_2; }
	inline void set_mGraphic_2(MaskableGraphic_t540192618 * value)
	{
		___mGraphic_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGraphic_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
