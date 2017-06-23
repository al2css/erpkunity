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

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t574222242;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t2419492168;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystemSimulationSp3554150940.h"
#include "UnityEngine_UnityEngine_ParticleSystemScalingMode366697231.h"
#include "UnityEngine_UnityEngine_ParticleSystem_TextureShee4262561859.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel2419492168.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Int32 UnityEngine.ParticleSystem::get_maxParticles()
extern "C"  int32_t ParticleSystem_get_maxParticles_m3216658554 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem::get_simulationSpace()
extern "C"  int32_t ParticleSystem_get_simulationSpace_m3869591304 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem::get_scalingMode()
extern "C"  int32_t ParticleSystem_get_scalingMode_m1820638792 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_scalingMode(UnityEngine.ParticleSystemScalingMode)
extern "C"  void ParticleSystem_set_scalingMode_m4252548423 (ParticleSystem_t3394631041 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.ParticleSystem::get_textureSheetAnimation()
extern "C"  TextureSheetAnimationModule_t4262561859  ParticleSystem_get_textureSheetAnimation_m1891398433 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C"  int32_t ParticleSystem_GetParticles_m1903763264 (ParticleSystem_t3394631041 * __this, ParticleU5BU5D_t574222242* ___particles0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Simulate(UnityEngine.ParticleSystem,System.Single,System.Boolean,System.Boolean)
extern "C"  bool ParticleSystem_Internal_Simulate_m1424460889 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___self0, float ___t1, bool ___restart2, bool ___fixedTimeStep3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean)
extern "C"  void ParticleSystem_Simulate_m1157362631 (ParticleSystem_t3394631041 * __this, float ___t0, bool ___withChildren1, bool ___restart2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ParticleSystem_Simulate_m3186727082 (ParticleSystem_t3394631041 * __this, float ___t0, bool ___withChildren1, bool ___restart2, bool ___fixedTimeStep3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m1240416587 (ParticleSystem_t3394631041 * __this, bool ___recurse0, IteratorDelegate_t2419492168 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m3260878897 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, IteratorDelegate_t2419492168 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
