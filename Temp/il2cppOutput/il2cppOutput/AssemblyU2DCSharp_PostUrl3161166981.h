#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PostUrl
struct  PostUrl_t3161166981  : public MonoBehaviour_t1158329972
{
public:
	// System.String PostUrl::url
	String_t* ___url_2;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(PostUrl_t3161166981, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
