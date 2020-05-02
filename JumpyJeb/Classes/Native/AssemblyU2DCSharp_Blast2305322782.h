#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blast
struct  Blast_t2305322782  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Blast::player
	Transform_t3275118058 * ___player_2;
	// System.Single Blast::speed
	float ___speed_3;
	// System.Boolean Blast::shoot
	bool ___shoot_4;
	// System.Boolean Blast::rightside
	bool ___rightside_5;
	// System.Single Blast::cooldown
	float ___cooldown_6;
	// System.Boolean Blast::original
	bool ___original_7;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Blast_t2305322782, ___player_2)); }
	inline Transform_t3275118058 * get_player_2() const { return ___player_2; }
	inline Transform_t3275118058 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t3275118058 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Blast_t2305322782, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_shoot_4() { return static_cast<int32_t>(offsetof(Blast_t2305322782, ___shoot_4)); }
	inline bool get_shoot_4() const { return ___shoot_4; }
	inline bool* get_address_of_shoot_4() { return &___shoot_4; }
	inline void set_shoot_4(bool value)
	{
		___shoot_4 = value;
	}

	inline static int32_t get_offset_of_rightside_5() { return static_cast<int32_t>(offsetof(Blast_t2305322782, ___rightside_5)); }
	inline bool get_rightside_5() const { return ___rightside_5; }
	inline bool* get_address_of_rightside_5() { return &___rightside_5; }
	inline void set_rightside_5(bool value)
	{
		___rightside_5 = value;
	}

	inline static int32_t get_offset_of_cooldown_6() { return static_cast<int32_t>(offsetof(Blast_t2305322782, ___cooldown_6)); }
	inline float get_cooldown_6() const { return ___cooldown_6; }
	inline float* get_address_of_cooldown_6() { return &___cooldown_6; }
	inline void set_cooldown_6(float value)
	{
		___cooldown_6 = value;
	}

	inline static int32_t get_offset_of_original_7() { return static_cast<int32_t>(offsetof(Blast_t2305322782, ___original_7)); }
	inline bool get_original_7() const { return ___original_7; }
	inline bool* get_address_of_original_7() { return &___original_7; }
	inline void set_original_7(bool value)
	{
		___original_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
