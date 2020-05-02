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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bat
struct  Bat_t4262919249  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Bat::player
	GameObject_t1756533147 * ___player_2;
	// System.Single Bat::speed
	float ___speed_3;
	// System.Boolean Bat::dead
	bool ___dead_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Bat_t4262919249, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Bat_t4262919249, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_dead_4() { return static_cast<int32_t>(offsetof(Bat_t4262919249, ___dead_4)); }
	inline bool get_dead_4() const { return ___dead_4; }
	inline bool* get_address_of_dead_4() { return &___dead_4; }
	inline void set_dead_4(bool value)
	{
		___dead_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
