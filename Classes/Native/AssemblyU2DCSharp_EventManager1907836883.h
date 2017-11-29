#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EventManager/ClickAction
struct ClickAction_t2171343234;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t1907836883  : public MonoBehaviour_t667441552
{
public:

public:
};

struct EventManager_t1907836883_StaticFields
{
public:
	// EventManager/ClickAction EventManager::OnClicked
	ClickAction_t2171343234 * ___OnClicked_2;

public:
	inline static int32_t get_offset_of_OnClicked_2() { return static_cast<int32_t>(offsetof(EventManager_t1907836883_StaticFields, ___OnClicked_2)); }
	inline ClickAction_t2171343234 * get_OnClicked_2() const { return ___OnClicked_2; }
	inline ClickAction_t2171343234 ** get_address_of_OnClicked_2() { return &___OnClicked_2; }
	inline void set_OnClicked_2(ClickAction_t2171343234 * value)
	{
		___OnClicked_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnClicked_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
