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

// EventManager
struct EventManager_t1907836883;
// EventManager/ClickAction
struct ClickAction_t2171343234;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EventManager_ClickAction2171343234.h"

// System.Void EventManager::.ctor()
extern "C"  void EventManager__ctor_m3403204648 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::add_OnClicked(EventManager/ClickAction)
extern "C"  void EventManager_add_OnClicked_m3886370478 (Il2CppObject * __this /* static, unused */, ClickAction_t2171343234 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::remove_OnClicked(EventManager/ClickAction)
extern "C"  void EventManager_remove_OnClicked_m1462684199 (Il2CppObject * __this /* static, unused */, ClickAction_t2171343234 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::OnGUI()
extern "C"  void EventManager_OnGUI_m2898603298 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
