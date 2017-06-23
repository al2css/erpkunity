#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// TabsGroupScript
struct TabsGroupScript_t182271716;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FBScript
struct  FBScript_t2572773241  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FBScript::DialogLoggedIn
	GameObject_t1756533147 * ___DialogLoggedIn_2;
	// UnityEngine.GameObject FBScript::DialogLoggedOut
	GameObject_t1756533147 * ___DialogLoggedOut_3;
	// UnityEngine.GameObject FBScript::Username
	GameObject_t1756533147 * ___Username_4;
	// UnityEngine.GameObject FBScript::Userpic
	GameObject_t1756533147 * ___Userpic_5;
	// TabsGroupScript FBScript::views
	TabsGroupScript_t182271716 * ___views_6;

public:
	inline static int32_t get_offset_of_DialogLoggedIn_2() { return static_cast<int32_t>(offsetof(FBScript_t2572773241, ___DialogLoggedIn_2)); }
	inline GameObject_t1756533147 * get_DialogLoggedIn_2() const { return ___DialogLoggedIn_2; }
	inline GameObject_t1756533147 ** get_address_of_DialogLoggedIn_2() { return &___DialogLoggedIn_2; }
	inline void set_DialogLoggedIn_2(GameObject_t1756533147 * value)
	{
		___DialogLoggedIn_2 = value;
		Il2CppCodeGenWriteBarrier(&___DialogLoggedIn_2, value);
	}

	inline static int32_t get_offset_of_DialogLoggedOut_3() { return static_cast<int32_t>(offsetof(FBScript_t2572773241, ___DialogLoggedOut_3)); }
	inline GameObject_t1756533147 * get_DialogLoggedOut_3() const { return ___DialogLoggedOut_3; }
	inline GameObject_t1756533147 ** get_address_of_DialogLoggedOut_3() { return &___DialogLoggedOut_3; }
	inline void set_DialogLoggedOut_3(GameObject_t1756533147 * value)
	{
		___DialogLoggedOut_3 = value;
		Il2CppCodeGenWriteBarrier(&___DialogLoggedOut_3, value);
	}

	inline static int32_t get_offset_of_Username_4() { return static_cast<int32_t>(offsetof(FBScript_t2572773241, ___Username_4)); }
	inline GameObject_t1756533147 * get_Username_4() const { return ___Username_4; }
	inline GameObject_t1756533147 ** get_address_of_Username_4() { return &___Username_4; }
	inline void set_Username_4(GameObject_t1756533147 * value)
	{
		___Username_4 = value;
		Il2CppCodeGenWriteBarrier(&___Username_4, value);
	}

	inline static int32_t get_offset_of_Userpic_5() { return static_cast<int32_t>(offsetof(FBScript_t2572773241, ___Userpic_5)); }
	inline GameObject_t1756533147 * get_Userpic_5() const { return ___Userpic_5; }
	inline GameObject_t1756533147 ** get_address_of_Userpic_5() { return &___Userpic_5; }
	inline void set_Userpic_5(GameObject_t1756533147 * value)
	{
		___Userpic_5 = value;
		Il2CppCodeGenWriteBarrier(&___Userpic_5, value);
	}

	inline static int32_t get_offset_of_views_6() { return static_cast<int32_t>(offsetof(FBScript_t2572773241, ___views_6)); }
	inline TabsGroupScript_t182271716 * get_views_6() const { return ___views_6; }
	inline TabsGroupScript_t182271716 ** get_address_of_views_6() { return &___views_6; }
	inline void set_views_6(TabsGroupScript_t182271716 * value)
	{
		___views_6 = value;
		Il2CppCodeGenWriteBarrier(&___views_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
