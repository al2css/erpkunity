#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.Editor.IEditorWrapper
struct IEditorWrapper_t4278084071;

#include "Facebook_Unity_Facebook_Unity_FacebookBase2463540723.h"
#include "Facebook_Unity_Facebook_Unity_ShareDialogMode1445392044.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Editor.EditorFacebook
struct  EditorFacebook_t1229262421  : public FacebookBase_t2463540723
{
public:
	// Facebook.Unity.Editor.IEditorWrapper Facebook.Unity.Editor.EditorFacebook::editorWrapper
	Il2CppObject * ___editorWrapper_4;
	// System.Boolean Facebook.Unity.Editor.EditorFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_5;
	// Facebook.Unity.ShareDialogMode Facebook.Unity.Editor.EditorFacebook::<ShareDialogMode>k__BackingField
	int32_t ___U3CShareDialogModeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_editorWrapper_4() { return static_cast<int32_t>(offsetof(EditorFacebook_t1229262421, ___editorWrapper_4)); }
	inline Il2CppObject * get_editorWrapper_4() const { return ___editorWrapper_4; }
	inline Il2CppObject ** get_address_of_editorWrapper_4() { return &___editorWrapper_4; }
	inline void set_editorWrapper_4(Il2CppObject * value)
	{
		___editorWrapper_4 = value;
		Il2CppCodeGenWriteBarrier(&___editorWrapper_4, value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EditorFacebook_t1229262421, ___U3CLimitEventUsageU3Ek__BackingField_5)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_5() const { return ___U3CLimitEventUsageU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_5() { return &___U3CLimitEventUsageU3Ek__BackingField_5; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_5(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CShareDialogModeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(EditorFacebook_t1229262421, ___U3CShareDialogModeU3Ek__BackingField_6)); }
	inline int32_t get_U3CShareDialogModeU3Ek__BackingField_6() const { return ___U3CShareDialogModeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CShareDialogModeU3Ek__BackingField_6() { return &___U3CShareDialogModeU3Ek__BackingField_6; }
	inline void set_U3CShareDialogModeU3Ek__BackingField_6(int32_t value)
	{
		___U3CShareDialogModeU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
