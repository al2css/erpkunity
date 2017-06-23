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

// Facebook.Unity.AsyncRequestStringWrapper
struct AsyncRequestStringWrapper_t3730940759;
// System.Uri
struct Uri_t19570940;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3020292135;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "Facebook_Unity_Facebook_Unity_HttpMethod3673888207.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"

// System.Void Facebook.Unity.AsyncRequestStringWrapper::.ctor()
extern "C"  void AsyncRequestStringWrapper__ctor_m840162722 (AsyncRequestStringWrapper_t3730940759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestStringWrapper::Request(System.Uri,Facebook.Unity.HttpMethod,UnityEngine.WWWForm,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestStringWrapper_Request_m4182103594 (AsyncRequestStringWrapper_t3730940759 * __this, Uri_t19570940 * ___url0, int32_t ___method1, WWWForm_t3950226929 * ___query2, FacebookDelegate_1_t3020292135 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestStringWrapper::Request(System.Uri,Facebook.Unity.HttpMethod,System.Collections.Generic.IDictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestStringWrapper_Request_m3669796766 (AsyncRequestStringWrapper_t3730940759 * __this, Uri_t19570940 * ___url0, int32_t ___method1, Il2CppObject* ___formData2, FacebookDelegate_1_t3020292135 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
