#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Skeleton
struct  Skeleton_t2531798043  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Skeleton::hit
	bool ___hit_2;
	// System.Boolean Skeleton::attack
	bool ___attack_3;

public:
	inline static int32_t get_offset_of_hit_2() { return static_cast<int32_t>(offsetof(Skeleton_t2531798043, ___hit_2)); }
	inline bool get_hit_2() const { return ___hit_2; }
	inline bool* get_address_of_hit_2() { return &___hit_2; }
	inline void set_hit_2(bool value)
	{
		___hit_2 = value;
	}

	inline static int32_t get_offset_of_attack_3() { return static_cast<int32_t>(offsetof(Skeleton_t2531798043, ___attack_3)); }
	inline bool get_attack_3() const { return ___attack_3; }
	inline bool* get_address_of_attack_3() { return &___attack_3; }
	inline void set_attack_3(bool value)
	{
		___attack_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
