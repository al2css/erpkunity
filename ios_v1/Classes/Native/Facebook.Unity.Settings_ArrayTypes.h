#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Facebook.Unity.Settings.FacebookSettings/UrlSchemes
struct UrlSchemes_t2066630273;
// Facebook.Unity.Settings.FacebookSettings/OnChangeCallback
struct OnChangeCallback_t2639189684;

#include "mscorlib_System_Array3829468939.h"
#include "Facebook_Unity_Settings_Facebook_Unity_Settings_Fa2066630273.h"
#include "Facebook_Unity_Settings_Facebook_Unity_Settings_Fa2639189684.h"

#pragma once
// Facebook.Unity.Settings.FacebookSettings/UrlSchemes[]
struct UrlSchemesU5BU5D_t2670588508  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) UrlSchemes_t2066630273 * m_Items[1];

public:
	inline UrlSchemes_t2066630273 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UrlSchemes_t2066630273 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UrlSchemes_t2066630273 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline UrlSchemes_t2066630273 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UrlSchemes_t2066630273 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UrlSchemes_t2066630273 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Facebook.Unity.Settings.FacebookSettings/OnChangeCallback[]
struct OnChangeCallbackU5BU5D_t3524760573  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) OnChangeCallback_t2639189684 * m_Items[1];

public:
	inline OnChangeCallback_t2639189684 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnChangeCallback_t2639189684 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnChangeCallback_t2639189684 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline OnChangeCallback_t2639189684 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnChangeCallback_t2639189684 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnChangeCallback_t2639189684 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
