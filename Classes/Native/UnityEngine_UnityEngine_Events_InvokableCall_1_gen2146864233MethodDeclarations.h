﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2146864233;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t4186098975;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m119008486_gshared (InvokableCall_1_t2146864233 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_1__ctor_m119008486(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_1_t2146864233 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m119008486_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m593494980_gshared (InvokableCall_1_t2146864233 * __this, UnityAction_1_t4186098975 * ___action0, const MethodInfo* method);
#define InvokableCall_1__ctor_m593494980(__this, ___action0, method) ((  void (*) (InvokableCall_1_t2146864233 *, UnityAction_1_t4186098975 *, const MethodInfo*))InvokableCall_1__ctor_m593494980_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m1294505213_gshared (InvokableCall_1_t2146864233 * __this, ObjectU5BU5D_t1108656482* ___args0, const MethodInfo* method);
#define InvokableCall_1_Invoke_m1294505213(__this, ___args0, method) ((  void (*) (InvokableCall_1_t2146864233 *, ObjectU5BU5D_t1108656482*, const MethodInfo*))InvokableCall_1_Invoke_m1294505213_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m270750159_gshared (InvokableCall_1_t2146864233 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_1_Find_m270750159(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_1_t2146864233 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m270750159_gshared)(__this, ___targetObj0, ___method1, method)
