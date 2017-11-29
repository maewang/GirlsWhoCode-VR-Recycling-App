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
// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bringToTrash
struct  bringToTrash_t281243531  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean bringToTrash::atFinalPos
	bool ___atFinalPos_2;
	// System.Boolean bringToTrash::hasReachedBin
	bool ___hasReachedBin_3;
	// UnityEngine.Vector3 bringToTrash::finalPos1
	Vector3_t4282066566  ___finalPos1_4;
	// UnityEngine.Vector3 bringToTrash::finalPos
	Vector3_t4282066566  ___finalPos_5;
	// UnityEngine.Vector3 bringToTrash::initPos
	Vector3_t4282066566  ___initPos_6;
	// System.Single bringToTrash::speed
	float ___speed_7;
	// System.Single bringToTrash::t
	float ___t_8;
	// System.Single bringToTrash::x
	float ___x_9;
	// System.Single bringToTrash::z
	float ___z_10;
	// System.Single bringToTrash::timeToReachTarget
	float ___timeToReachTarget_11;
	// UnityEngine.Vector3 bringToTrash::direction
	Vector3_t4282066566  ___direction_12;
	// UnityEngine.GameObject bringToTrash::item
	GameObject_t3674682005 * ___item_13;
	// System.String[] bringToTrash::myItems
	StringU5BU5D_t4054002952* ___myItems_14;

public:
	inline static int32_t get_offset_of_atFinalPos_2() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___atFinalPos_2)); }
	inline bool get_atFinalPos_2() const { return ___atFinalPos_2; }
	inline bool* get_address_of_atFinalPos_2() { return &___atFinalPos_2; }
	inline void set_atFinalPos_2(bool value)
	{
		___atFinalPos_2 = value;
	}

	inline static int32_t get_offset_of_hasReachedBin_3() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___hasReachedBin_3)); }
	inline bool get_hasReachedBin_3() const { return ___hasReachedBin_3; }
	inline bool* get_address_of_hasReachedBin_3() { return &___hasReachedBin_3; }
	inline void set_hasReachedBin_3(bool value)
	{
		___hasReachedBin_3 = value;
	}

	inline static int32_t get_offset_of_finalPos1_4() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___finalPos1_4)); }
	inline Vector3_t4282066566  get_finalPos1_4() const { return ___finalPos1_4; }
	inline Vector3_t4282066566 * get_address_of_finalPos1_4() { return &___finalPos1_4; }
	inline void set_finalPos1_4(Vector3_t4282066566  value)
	{
		___finalPos1_4 = value;
	}

	inline static int32_t get_offset_of_finalPos_5() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___finalPos_5)); }
	inline Vector3_t4282066566  get_finalPos_5() const { return ___finalPos_5; }
	inline Vector3_t4282066566 * get_address_of_finalPos_5() { return &___finalPos_5; }
	inline void set_finalPos_5(Vector3_t4282066566  value)
	{
		___finalPos_5 = value;
	}

	inline static int32_t get_offset_of_initPos_6() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___initPos_6)); }
	inline Vector3_t4282066566  get_initPos_6() const { return ___initPos_6; }
	inline Vector3_t4282066566 * get_address_of_initPos_6() { return &___initPos_6; }
	inline void set_initPos_6(Vector3_t4282066566  value)
	{
		___initPos_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_t_8() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___t_8)); }
	inline float get_t_8() const { return ___t_8; }
	inline float* get_address_of_t_8() { return &___t_8; }
	inline void set_t_8(float value)
	{
		___t_8 = value;
	}

	inline static int32_t get_offset_of_x_9() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___x_9)); }
	inline float get_x_9() const { return ___x_9; }
	inline float* get_address_of_x_9() { return &___x_9; }
	inline void set_x_9(float value)
	{
		___x_9 = value;
	}

	inline static int32_t get_offset_of_z_10() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___z_10)); }
	inline float get_z_10() const { return ___z_10; }
	inline float* get_address_of_z_10() { return &___z_10; }
	inline void set_z_10(float value)
	{
		___z_10 = value;
	}

	inline static int32_t get_offset_of_timeToReachTarget_11() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___timeToReachTarget_11)); }
	inline float get_timeToReachTarget_11() const { return ___timeToReachTarget_11; }
	inline float* get_address_of_timeToReachTarget_11() { return &___timeToReachTarget_11; }
	inline void set_timeToReachTarget_11(float value)
	{
		___timeToReachTarget_11 = value;
	}

	inline static int32_t get_offset_of_direction_12() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___direction_12)); }
	inline Vector3_t4282066566  get_direction_12() const { return ___direction_12; }
	inline Vector3_t4282066566 * get_address_of_direction_12() { return &___direction_12; }
	inline void set_direction_12(Vector3_t4282066566  value)
	{
		___direction_12 = value;
	}

	inline static int32_t get_offset_of_item_13() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___item_13)); }
	inline GameObject_t3674682005 * get_item_13() const { return ___item_13; }
	inline GameObject_t3674682005 ** get_address_of_item_13() { return &___item_13; }
	inline void set_item_13(GameObject_t3674682005 * value)
	{
		___item_13 = value;
		Il2CppCodeGenWriteBarrier(&___item_13, value);
	}

	inline static int32_t get_offset_of_myItems_14() { return static_cast<int32_t>(offsetof(bringToTrash_t281243531, ___myItems_14)); }
	inline StringU5BU5D_t4054002952* get_myItems_14() const { return ___myItems_14; }
	inline StringU5BU5D_t4054002952** get_address_of_myItems_14() { return &___myItems_14; }
	inline void set_myItems_14(StringU5BU5D_t4054002952* value)
	{
		___myItems_14 = value;
		Il2CppCodeGenWriteBarrier(&___myItems_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
