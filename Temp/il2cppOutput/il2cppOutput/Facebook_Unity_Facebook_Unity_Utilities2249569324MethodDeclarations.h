#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Uri
struct Uri_t19570940;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Facebook.Unity.AccessToken
struct AccessToken_t2518141643;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.Unity.Utilities::get_CommandLineArguments()
extern "C"  Dictionary_2_t3943999495 * Utilities_get_CommandLineArguments_m593345263 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Facebook.Unity.Utilities::TotalSeconds(System.DateTime)
extern "C"  int64_t Utilities_TotalSeconds_m1950497565 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToCommaSeparateList(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  String_t* Utilities_ToCommaSeparateList_m3081682510 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::AbsoluteUrlOrEmptyString(System.Uri)
extern "C"  String_t* Utilities_AbsoluteUrlOrEmptyString_m622454692 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::GetUserAgent(System.String,System.String)
extern "C"  String_t* Utilities_GetUserAgent_m2272878756 (Il2CppObject * __this /* static, unused */, String_t* ___productName0, String_t* ___productVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* Utilities_ToJson_m3484133515 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.Utilities::ParseAccessTokenFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  AccessToken_t2518141643 * Utilities_ParseAccessTokenFromResult_m2556332923 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToStringNullOk(System.Object)
extern "C"  String_t* Utilities_ToStringNullOk_m839901937 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::FormatToString(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  String_t* Utilities_FormatToString_m311376973 (Il2CppObject * __this /* static, unused */, String_t* ___baseString0, String_t* ___className1, Il2CppObject* ___propertiesAndValues2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::ParseExpirationDateFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  DateTime_t693205669  Utilities_ParseExpirationDateFromResult_m4222426189 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Facebook.Unity.Utilities::ParseLastRefreshFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Nullable_1_t3251239280  Utilities_ParseLastRefreshFromResult_m1674143120 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Facebook.Unity.Utilities::ParsePermissionFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* Utilities_ParsePermissionFromResult_m3288020514 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::FromTimestamp(System.Int32)
extern "C"  DateTime_t693205669  Utilities_FromTimestamp_m1820696531 (Il2CppObject * __this /* static, unused */, int32_t ___timestamp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::<ParsePermissionFromResult>m__0(System.Object)
extern "C"  String_t* Utilities_U3CParsePermissionFromResultU3Em__0_m217859914 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___permission0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
