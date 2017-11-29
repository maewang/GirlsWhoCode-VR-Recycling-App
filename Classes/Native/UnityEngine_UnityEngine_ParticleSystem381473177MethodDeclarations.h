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
struct ParticleSystem_t381473177;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem381473177.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "UnityEngine_UnityEngine_ParticleSystem_Particle405273609.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmitParams1350124540.h"

// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C"  void ParticleSystem_Emit_m1128282864 (ParticleSystem_t381473177 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C"  void ParticleSystem_INTERNAL_CALL_Emit_m2738975429 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___self0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32)
extern "C"  void ParticleSystem_Emit_m578183704 (ParticleSystem_t381473177 * __this, Vector3_t4282066566  ___position0, Vector3_t4282066566  ___velocity1, float ___size2, float ___lifetime3, Color32_t598853688  ___color4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle)
extern "C"  void ParticleSystem_Emit_m1308038538 (ParticleSystem_t381473177 * __this, Particle_t405273609  ___particle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_EmitOld(UnityEngine.ParticleSystem/Particle&)
extern "C"  void ParticleSystem_Internal_EmitOld_m965696929 (ParticleSystem_t381473177 * __this, Particle_t405273609 * ___particle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32)
extern "C"  void ParticleSystem_Emit_m589665472 (ParticleSystem_t381473177 * __this, EmitParams_t1350124540  ___emitParams0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Emit(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
extern "C"  void ParticleSystem_Internal_Emit_m114456086 (ParticleSystem_t381473177 * __this, EmitParams_t1350124540 * ___emitParams0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
