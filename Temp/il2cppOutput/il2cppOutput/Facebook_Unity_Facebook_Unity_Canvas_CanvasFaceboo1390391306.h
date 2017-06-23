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
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t562769999;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t712804158;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t1171021859;

#include "Facebook_Unity_Facebook_Unity_FacebookBase2463540723.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Canvas.CanvasFacebook
struct  CanvasFacebook_t1390391306  : public FacebookBase_t2463540723
{
public:
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appId
	String_t* ___appId_4;
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appLinkUrl
	String_t* ___appLinkUrl_5;
	// Facebook.Unity.Canvas.ICanvasJSWrapper Facebook.Unity.Canvas.CanvasFacebook::canvasJSWrapper
	Il2CppObject * ___canvasJSWrapper_6;
	// Facebook.Unity.HideUnityDelegate Facebook.Unity.Canvas.CanvasFacebook::onHideUnityDelegate
	HideUnityDelegate_t712804158 * ___onHideUnityDelegate_7;
	// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_appId_4() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___appId_4)); }
	inline String_t* get_appId_4() const { return ___appId_4; }
	inline String_t** get_address_of_appId_4() { return &___appId_4; }
	inline void set_appId_4(String_t* value)
	{
		___appId_4 = value;
		Il2CppCodeGenWriteBarrier(&___appId_4, value);
	}

	inline static int32_t get_offset_of_appLinkUrl_5() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___appLinkUrl_5)); }
	inline String_t* get_appLinkUrl_5() const { return ___appLinkUrl_5; }
	inline String_t** get_address_of_appLinkUrl_5() { return &___appLinkUrl_5; }
	inline void set_appLinkUrl_5(String_t* value)
	{
		___appLinkUrl_5 = value;
		Il2CppCodeGenWriteBarrier(&___appLinkUrl_5, value);
	}

	inline static int32_t get_offset_of_canvasJSWrapper_6() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___canvasJSWrapper_6)); }
	inline Il2CppObject * get_canvasJSWrapper_6() const { return ___canvasJSWrapper_6; }
	inline Il2CppObject ** get_address_of_canvasJSWrapper_6() { return &___canvasJSWrapper_6; }
	inline void set_canvasJSWrapper_6(Il2CppObject * value)
	{
		___canvasJSWrapper_6 = value;
		Il2CppCodeGenWriteBarrier(&___canvasJSWrapper_6, value);
	}

	inline static int32_t get_offset_of_onHideUnityDelegate_7() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___onHideUnityDelegate_7)); }
	inline HideUnityDelegate_t712804158 * get_onHideUnityDelegate_7() const { return ___onHideUnityDelegate_7; }
	inline HideUnityDelegate_t712804158 ** get_address_of_onHideUnityDelegate_7() { return &___onHideUnityDelegate_7; }
	inline void set_onHideUnityDelegate_7(HideUnityDelegate_t712804158 * value)
	{
		___onHideUnityDelegate_7 = value;
		Il2CppCodeGenWriteBarrier(&___onHideUnityDelegate_7, value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___U3CLimitEventUsageU3Ek__BackingField_8)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_8() const { return ___U3CLimitEventUsageU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_8() { return &___U3CLimitEventUsageU3Ek__BackingField_8; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_8(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_8 = value;
	}
};

struct CanvasFacebook_t1390391306_StaticFields
{
public:
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Canvas.CanvasFacebook::<>f__am$cache0
	Callback_1_t1171021859 * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Callback_1_t1171021859 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Callback_1_t1171021859 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Callback_1_t1171021859 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
