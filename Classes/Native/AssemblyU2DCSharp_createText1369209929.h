#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// createText
struct  createText_t1369209929  : public MonoBehaviour_t667441552
{
public:
	// System.Single createText::time
	float ___time_2;
	// UnityEngine.GameObject createText::obj
	GameObject_t3674682005 * ___obj_3;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(createText_t1369209929, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(createText_t1369209929, ___obj_3)); }
	inline GameObject_t3674682005 * get_obj_3() const { return ___obj_3; }
	inline GameObject_t3674682005 ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(GameObject_t3674682005 * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier(&___obj_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
