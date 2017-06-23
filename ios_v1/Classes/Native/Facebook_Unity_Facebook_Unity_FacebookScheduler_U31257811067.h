#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.FacebookScheduler/<DelayEvent>c__Iterator0
struct  U3CDelayEventU3Ec__Iterator0_t1257811067  : public Il2CppObject
{
public:
	// System.Int64 Facebook.Unity.FacebookScheduler/<DelayEvent>c__Iterator0::delay
	int64_t ___delay_0;
	// System.Action Facebook.Unity.FacebookScheduler/<DelayEvent>c__Iterator0::action
	Action_t3226471752 * ___action_1;
	// System.Object Facebook.Unity.FacebookScheduler/<DelayEvent>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean Facebook.Unity.FacebookScheduler/<DelayEvent>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Facebook.Unity.FacebookScheduler/<DelayEvent>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ec__Iterator0_t1257811067, ___delay_0)); }
	inline int64_t get_delay_0() const { return ___delay_0; }
	inline int64_t* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(int64_t value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ec__Iterator0_t1257811067, ___action_1)); }
	inline Action_t3226471752 * get_action_1() const { return ___action_1; }
	inline Action_t3226471752 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_t3226471752 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ec__Iterator0_t1257811067, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ec__Iterator0_t1257811067, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ec__Iterator0_t1257811067, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
