#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mage
struct  Mage_t1600141278  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.BoxCollider2D Mage::skull
	BoxCollider2D_t948534547 * ___skull_2;
	// UnityEngine.GameObject Mage::blast
	GameObject_t1756533147 * ___blast_3;
	// UnityEngine.GameObject Mage::cloud
	GameObject_t1756533147 * ___cloud_4;
	// System.Boolean Mage::hit
	bool ___hit_5;
	// System.Boolean Mage::dead
	bool ___dead_6;
	// System.Boolean Mage::teleport
	bool ___teleport_7;
	// System.Int32 Mage::currenthealth
	int32_t ___currenthealth_8;
	// System.Boolean Mage::appear
	bool ___appear_9;
	// System.Boolean Mage::rightside
	bool ___rightside_10;
	// System.Boolean Mage::rightside2
	bool ___rightside2_11;
	// UnityEngine.GameObject Mage::bossplatform
	GameObject_t1756533147 * ___bossplatform_12;
	// System.Single Mage::cooldown
	float ___cooldown_13;
	// System.Boolean Mage::up
	bool ___up_14;
	// System.Single Mage::ypos
	float ___ypos_15;
	// System.Boolean Mage::start
	bool ___start_16;
	// UnityEngine.GameObject Mage::rightborder
	GameObject_t1756533147 * ___rightborder_17;
	// UnityEngine.GameObject Mage::bat
	GameObject_t1756533147 * ___bat_18;
	// System.Boolean Mage::bats
	bool ___bats_19;
	// System.Single Mage::speed
	float ___speed_20;

public:
	inline static int32_t get_offset_of_skull_2() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___skull_2)); }
	inline BoxCollider2D_t948534547 * get_skull_2() const { return ___skull_2; }
	inline BoxCollider2D_t948534547 ** get_address_of_skull_2() { return &___skull_2; }
	inline void set_skull_2(BoxCollider2D_t948534547 * value)
	{
		___skull_2 = value;
		Il2CppCodeGenWriteBarrier(&___skull_2, value);
	}

	inline static int32_t get_offset_of_blast_3() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___blast_3)); }
	inline GameObject_t1756533147 * get_blast_3() const { return ___blast_3; }
	inline GameObject_t1756533147 ** get_address_of_blast_3() { return &___blast_3; }
	inline void set_blast_3(GameObject_t1756533147 * value)
	{
		___blast_3 = value;
		Il2CppCodeGenWriteBarrier(&___blast_3, value);
	}

	inline static int32_t get_offset_of_cloud_4() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___cloud_4)); }
	inline GameObject_t1756533147 * get_cloud_4() const { return ___cloud_4; }
	inline GameObject_t1756533147 ** get_address_of_cloud_4() { return &___cloud_4; }
	inline void set_cloud_4(GameObject_t1756533147 * value)
	{
		___cloud_4 = value;
		Il2CppCodeGenWriteBarrier(&___cloud_4, value);
	}

	inline static int32_t get_offset_of_hit_5() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___hit_5)); }
	inline bool get_hit_5() const { return ___hit_5; }
	inline bool* get_address_of_hit_5() { return &___hit_5; }
	inline void set_hit_5(bool value)
	{
		___hit_5 = value;
	}

	inline static int32_t get_offset_of_dead_6() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___dead_6)); }
	inline bool get_dead_6() const { return ___dead_6; }
	inline bool* get_address_of_dead_6() { return &___dead_6; }
	inline void set_dead_6(bool value)
	{
		___dead_6 = value;
	}

	inline static int32_t get_offset_of_teleport_7() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___teleport_7)); }
	inline bool get_teleport_7() const { return ___teleport_7; }
	inline bool* get_address_of_teleport_7() { return &___teleport_7; }
	inline void set_teleport_7(bool value)
	{
		___teleport_7 = value;
	}

	inline static int32_t get_offset_of_currenthealth_8() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___currenthealth_8)); }
	inline int32_t get_currenthealth_8() const { return ___currenthealth_8; }
	inline int32_t* get_address_of_currenthealth_8() { return &___currenthealth_8; }
	inline void set_currenthealth_8(int32_t value)
	{
		___currenthealth_8 = value;
	}

	inline static int32_t get_offset_of_appear_9() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___appear_9)); }
	inline bool get_appear_9() const { return ___appear_9; }
	inline bool* get_address_of_appear_9() { return &___appear_9; }
	inline void set_appear_9(bool value)
	{
		___appear_9 = value;
	}

	inline static int32_t get_offset_of_rightside_10() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___rightside_10)); }
	inline bool get_rightside_10() const { return ___rightside_10; }
	inline bool* get_address_of_rightside_10() { return &___rightside_10; }
	inline void set_rightside_10(bool value)
	{
		___rightside_10 = value;
	}

	inline static int32_t get_offset_of_rightside2_11() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___rightside2_11)); }
	inline bool get_rightside2_11() const { return ___rightside2_11; }
	inline bool* get_address_of_rightside2_11() { return &___rightside2_11; }
	inline void set_rightside2_11(bool value)
	{
		___rightside2_11 = value;
	}

	inline static int32_t get_offset_of_bossplatform_12() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___bossplatform_12)); }
	inline GameObject_t1756533147 * get_bossplatform_12() const { return ___bossplatform_12; }
	inline GameObject_t1756533147 ** get_address_of_bossplatform_12() { return &___bossplatform_12; }
	inline void set_bossplatform_12(GameObject_t1756533147 * value)
	{
		___bossplatform_12 = value;
		Il2CppCodeGenWriteBarrier(&___bossplatform_12, value);
	}

	inline static int32_t get_offset_of_cooldown_13() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___cooldown_13)); }
	inline float get_cooldown_13() const { return ___cooldown_13; }
	inline float* get_address_of_cooldown_13() { return &___cooldown_13; }
	inline void set_cooldown_13(float value)
	{
		___cooldown_13 = value;
	}

	inline static int32_t get_offset_of_up_14() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___up_14)); }
	inline bool get_up_14() const { return ___up_14; }
	inline bool* get_address_of_up_14() { return &___up_14; }
	inline void set_up_14(bool value)
	{
		___up_14 = value;
	}

	inline static int32_t get_offset_of_ypos_15() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___ypos_15)); }
	inline float get_ypos_15() const { return ___ypos_15; }
	inline float* get_address_of_ypos_15() { return &___ypos_15; }
	inline void set_ypos_15(float value)
	{
		___ypos_15 = value;
	}

	inline static int32_t get_offset_of_start_16() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___start_16)); }
	inline bool get_start_16() const { return ___start_16; }
	inline bool* get_address_of_start_16() { return &___start_16; }
	inline void set_start_16(bool value)
	{
		___start_16 = value;
	}

	inline static int32_t get_offset_of_rightborder_17() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___rightborder_17)); }
	inline GameObject_t1756533147 * get_rightborder_17() const { return ___rightborder_17; }
	inline GameObject_t1756533147 ** get_address_of_rightborder_17() { return &___rightborder_17; }
	inline void set_rightborder_17(GameObject_t1756533147 * value)
	{
		___rightborder_17 = value;
		Il2CppCodeGenWriteBarrier(&___rightborder_17, value);
	}

	inline static int32_t get_offset_of_bat_18() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___bat_18)); }
	inline GameObject_t1756533147 * get_bat_18() const { return ___bat_18; }
	inline GameObject_t1756533147 ** get_address_of_bat_18() { return &___bat_18; }
	inline void set_bat_18(GameObject_t1756533147 * value)
	{
		___bat_18 = value;
		Il2CppCodeGenWriteBarrier(&___bat_18, value);
	}

	inline static int32_t get_offset_of_bats_19() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___bats_19)); }
	inline bool get_bats_19() const { return ___bats_19; }
	inline bool* get_address_of_bats_19() { return &___bats_19; }
	inline void set_bats_19(bool value)
	{
		___bats_19 = value;
	}

	inline static int32_t get_offset_of_speed_20() { return static_cast<int32_t>(offsetof(Mage_t1600141278, ___speed_20)); }
	inline float get_speed_20() const { return ___speed_20; }
	inline float* get_address_of_speed_20() { return &___speed_20; }
	inline void set_speed_20(float value)
	{
		___speed_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
