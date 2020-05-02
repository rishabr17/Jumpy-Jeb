#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t13116344;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ghost
struct  Ghost_t2869969849  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Ghost::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.GameObject Ghost::rightborder
	GameObject_t1756533147 * ___rightborder_3;
	// System.Boolean Ghost::alive
	bool ___alive_4;
	// System.Single Ghost::currenthealth
	float ___currenthealth_5;
	// UnityEngine.CircleCollider2D Ghost::nearby
	CircleCollider2D_t13116344 * ___nearby_6;
	// System.Boolean Ghost::chase
	bool ___chase_7;
	// System.Boolean Ghost::hurt
	bool ___hurt_8;
	// System.Single Ghost::fade
	float ___fade_9;
	// UnityEngine.BoxCollider2D Ghost::attack
	BoxCollider2D_t948534547 * ___attack_10;
	// UnityEngine.BoxCollider2D Ghost::self
	BoxCollider2D_t948534547 * ___self_11;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_rightborder_3() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___rightborder_3)); }
	inline GameObject_t1756533147 * get_rightborder_3() const { return ___rightborder_3; }
	inline GameObject_t1756533147 ** get_address_of_rightborder_3() { return &___rightborder_3; }
	inline void set_rightborder_3(GameObject_t1756533147 * value)
	{
		___rightborder_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightborder_3, value);
	}

	inline static int32_t get_offset_of_alive_4() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___alive_4)); }
	inline bool get_alive_4() const { return ___alive_4; }
	inline bool* get_address_of_alive_4() { return &___alive_4; }
	inline void set_alive_4(bool value)
	{
		___alive_4 = value;
	}

	inline static int32_t get_offset_of_currenthealth_5() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___currenthealth_5)); }
	inline float get_currenthealth_5() const { return ___currenthealth_5; }
	inline float* get_address_of_currenthealth_5() { return &___currenthealth_5; }
	inline void set_currenthealth_5(float value)
	{
		___currenthealth_5 = value;
	}

	inline static int32_t get_offset_of_nearby_6() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___nearby_6)); }
	inline CircleCollider2D_t13116344 * get_nearby_6() const { return ___nearby_6; }
	inline CircleCollider2D_t13116344 ** get_address_of_nearby_6() { return &___nearby_6; }
	inline void set_nearby_6(CircleCollider2D_t13116344 * value)
	{
		___nearby_6 = value;
		Il2CppCodeGenWriteBarrier(&___nearby_6, value);
	}

	inline static int32_t get_offset_of_chase_7() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___chase_7)); }
	inline bool get_chase_7() const { return ___chase_7; }
	inline bool* get_address_of_chase_7() { return &___chase_7; }
	inline void set_chase_7(bool value)
	{
		___chase_7 = value;
	}

	inline static int32_t get_offset_of_hurt_8() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___hurt_8)); }
	inline bool get_hurt_8() const { return ___hurt_8; }
	inline bool* get_address_of_hurt_8() { return &___hurt_8; }
	inline void set_hurt_8(bool value)
	{
		___hurt_8 = value;
	}

	inline static int32_t get_offset_of_fade_9() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___fade_9)); }
	inline float get_fade_9() const { return ___fade_9; }
	inline float* get_address_of_fade_9() { return &___fade_9; }
	inline void set_fade_9(float value)
	{
		___fade_9 = value;
	}

	inline static int32_t get_offset_of_attack_10() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___attack_10)); }
	inline BoxCollider2D_t948534547 * get_attack_10() const { return ___attack_10; }
	inline BoxCollider2D_t948534547 ** get_address_of_attack_10() { return &___attack_10; }
	inline void set_attack_10(BoxCollider2D_t948534547 * value)
	{
		___attack_10 = value;
		Il2CppCodeGenWriteBarrier(&___attack_10, value);
	}

	inline static int32_t get_offset_of_self_11() { return static_cast<int32_t>(offsetof(Ghost_t2869969849, ___self_11)); }
	inline BoxCollider2D_t948534547 * get_self_11() const { return ___self_11; }
	inline BoxCollider2D_t948534547 ** get_address_of_self_11() { return &___self_11; }
	inline void set_self_11(BoxCollider2D_t948534547 * value)
	{
		___self_11 = value;
		Il2CppCodeGenWriteBarrier(&___self_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
