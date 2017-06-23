#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// View
struct View_t854181575;
// System.String
struct String_t;
// WWWHelper
struct WWWHelper_t192429451;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// View
struct  View_t854181575  : public MonoBehaviour_t1158329972
{
public:
	// System.String View::viewUrl
	String_t* ___viewUrl_3;
	// WWWHelper View::requestManager
	WWWHelper_t192429451 * ___requestManager_4;

public:
	inline static int32_t get_offset_of_viewUrl_3() { return static_cast<int32_t>(offsetof(View_t854181575, ___viewUrl_3)); }
	inline String_t* get_viewUrl_3() const { return ___viewUrl_3; }
	inline String_t** get_address_of_viewUrl_3() { return &___viewUrl_3; }
	inline void set_viewUrl_3(String_t* value)
	{
		___viewUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___viewUrl_3, value);
	}

	inline static int32_t get_offset_of_requestManager_4() { return static_cast<int32_t>(offsetof(View_t854181575, ___requestManager_4)); }
	inline WWWHelper_t192429451 * get_requestManager_4() const { return ___requestManager_4; }
	inline WWWHelper_t192429451 ** get_address_of_requestManager_4() { return &___requestManager_4; }
	inline void set_requestManager_4(WWWHelper_t192429451 * value)
	{
		___requestManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___requestManager_4, value);
	}
};

struct View_t854181575_StaticFields
{
public:
	// View View::viewManager
	View_t854181575 * ___viewManager_2;

public:
	inline static int32_t get_offset_of_viewManager_2() { return static_cast<int32_t>(offsetof(View_t854181575_StaticFields, ___viewManager_2)); }
	inline View_t854181575 * get_viewManager_2() const { return ___viewManager_2; }
	inline View_t854181575 ** get_address_of_viewManager_2() { return &___viewManager_2; }
	inline void set_viewManager_2(View_t854181575 * value)
	{
		___viewManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___viewManager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
