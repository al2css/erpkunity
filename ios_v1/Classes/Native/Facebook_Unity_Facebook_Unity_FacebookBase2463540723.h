#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// Facebook.Unity.CallbackManager
struct CallbackManager_t4242095184;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t1989381442;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.FacebookBase
struct  FacebookBase_t2463540723  : public Il2CppObject
{
public:
	// Facebook.Unity.InitDelegate Facebook.Unity.FacebookBase::onInitCompleteDelegate
	InitDelegate_t3410465555 * ___onInitCompleteDelegate_0;
	// System.Boolean Facebook.Unity.FacebookBase::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_1;
	// Facebook.Unity.CallbackManager Facebook.Unity.FacebookBase::<CallbackManager>k__BackingField
	CallbackManager_t4242095184 * ___U3CCallbackManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_onInitCompleteDelegate_0() { return static_cast<int32_t>(offsetof(FacebookBase_t2463540723, ___onInitCompleteDelegate_0)); }
	inline InitDelegate_t3410465555 * get_onInitCompleteDelegate_0() const { return ___onInitCompleteDelegate_0; }
	inline InitDelegate_t3410465555 ** get_address_of_onInitCompleteDelegate_0() { return &___onInitCompleteDelegate_0; }
	inline void set_onInitCompleteDelegate_0(InitDelegate_t3410465555 * value)
	{
		___onInitCompleteDelegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___onInitCompleteDelegate_0, value);
	}

	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FacebookBase_t2463540723, ___U3CInitializedU3Ek__BackingField_1)); }
	inline bool get_U3CInitializedU3Ek__BackingField_1() const { return ___U3CInitializedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_1() { return &___U3CInitializedU3Ek__BackingField_1; }
	inline void set_U3CInitializedU3Ek__BackingField_1(bool value)
	{
		___U3CInitializedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCallbackManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FacebookBase_t2463540723, ___U3CCallbackManagerU3Ek__BackingField_2)); }
	inline CallbackManager_t4242095184 * get_U3CCallbackManagerU3Ek__BackingField_2() const { return ___U3CCallbackManagerU3Ek__BackingField_2; }
	inline CallbackManager_t4242095184 ** get_address_of_U3CCallbackManagerU3Ek__BackingField_2() { return &___U3CCallbackManagerU3Ek__BackingField_2; }
	inline void set_U3CCallbackManagerU3Ek__BackingField_2(CallbackManager_t4242095184 * value)
	{
		___U3CCallbackManagerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCallbackManagerU3Ek__BackingField_2, value);
	}
};

struct FacebookBase_t2463540723_StaticFields
{
public:
	// System.Func`2<System.String,System.Boolean> Facebook.Unity.FacebookBase::<>f__mg$cache0
	Func_2_t1989381442 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(FacebookBase_t2463540723_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline Func_2_t1989381442 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline Func_2_t1989381442 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(Func_2_t1989381442 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
