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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_Particle250075699.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
extern "C"  Vector3_t2243707580  Particle_get_position_m492152565 (Particle_t250075699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
extern "C"  float Particle_get_remainingLifetime_m345244003 (Particle_t250075699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/Particle::get_startLifetime()
extern "C"  float Particle_get_startLifetime_m466998295 (Particle_t250075699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/Particle::get_rotation()
extern "C"  float Particle_get_rotation_m2522397246 (Particle_t250075699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/Particle::GetCurrentSize(UnityEngine.ParticleSystem)
extern "C"  float Particle_GetCurrentSize_m476813577 (Particle_t250075699 * __this, ParticleSystem_t3394631041 * ___system0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::GetCurrentColor(UnityEngine.ParticleSystem)
extern "C"  Color32_t874517518  Particle_GetCurrentColor_m1351795807 (Particle_t250075699 * __this, ParticleSystem_t3394631041 * ___system0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/Particle::GetCurrentSize(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/Particle&)
extern "C"  float Particle_GetCurrentSize_m1561973392 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___system0, Particle_t250075699 * ___particle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::GetCurrentColor(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/Particle&)
extern "C"  Color32_t874517518  Particle_GetCurrentColor_m3511544874 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___system0, Particle_t250075699 * ___particle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::INTERNAL_CALL_GetCurrentColor(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/Particle&,UnityEngine.Color32&)
extern "C"  void Particle_INTERNAL_CALL_GetCurrentColor_m2130496260 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___system0, Particle_t250075699 * ___particle1, Color32_t874517518 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
