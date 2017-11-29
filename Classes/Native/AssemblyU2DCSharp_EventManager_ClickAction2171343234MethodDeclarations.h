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

// EventManager/ClickAction
struct ClickAction_t2171343234;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void EventManager/ClickAction::.ctor(System.Object,System.IntPtr)
extern "C"  void ClickAction__ctor_m1691827497 (ClickAction_t2171343234 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager/ClickAction::Invoke()
extern "C"  void ClickAction_Invoke_m1533643459 (ClickAction_t2171343234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult EventManager/ClickAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ClickAction_BeginInvoke_m667234528 (ClickAction_t2171343234 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager/ClickAction::EndInvoke(System.IAsyncResult)
extern "C"  void ClickAction_EndInvoke_m2007083961 (ClickAction_t2171343234 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
