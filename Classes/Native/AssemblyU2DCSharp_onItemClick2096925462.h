#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// onItemClick
struct  onItemClick_t2096925462  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 onItemClick::currentPos
	Vector3_t4282066566  ___currentPos_2;
	// UnityEngine.Vector3 onItemClick::targetPos
	Vector3_t4282066566  ___targetPos_3;

public:
	inline static int32_t get_offset_of_currentPos_2() { return static_cast<int32_t>(offsetof(onItemClick_t2096925462, ___currentPos_2)); }
	inline Vector3_t4282066566  get_currentPos_2() const { return ___currentPos_2; }
	inline Vector3_t4282066566 * get_address_of_currentPos_2() { return &___currentPos_2; }
	inline void set_currentPos_2(Vector3_t4282066566  value)
	{
		___currentPos_2 = value;
	}

	inline static int32_t get_offset_of_targetPos_3() { return static_cast<int32_t>(offsetof(onItemClick_t2096925462, ___targetPos_3)); }
	inline Vector3_t4282066566  get_targetPos_3() const { return ___targetPos_3; }
	inline Vector3_t4282066566 * get_address_of_targetPos_3() { return &___targetPos_3; }
	inline void set_targetPos_3(Vector3_t4282066566  value)
	{
		___targetPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
