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

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] UnityEngine.UI.Extensions.CLZF2::Compress(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* CLZF2_Compress_m1946031888 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___inputBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.UI.Extensions.CLZF2::Decompress(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* CLZF2_Decompress_m2337477207 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___inputBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.CLZF2::lzf_compress(System.Byte[],System.Byte[]&)
extern "C"  int32_t CLZF2_lzf_compress_m4123903636 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, ByteU5BU5D_t3397334013** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.CLZF2::lzf_decompress(System.Byte[],System.Byte[]&)
extern "C"  int32_t CLZF2_lzf_decompress_m1431904831 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, ByteU5BU5D_t3397334013** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.CLZF2::.cctor()
extern "C"  void CLZF2__cctor_m3268872360 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
