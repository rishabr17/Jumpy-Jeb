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

// Coins
struct  Coins_t826700442  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Coins::destroy
	bool ___destroy_2;
	// System.Single Coins::countdown
	float ___countdown_3;

public:
	inline static int32_t get_offset_of_destroy_2() { return static_cast<int32_t>(offsetof(Coins_t826700442, ___destroy_2)); }
	inline bool get_destroy_2() const { return ___destroy_2; }
	inline bool* get_address_of_destroy_2() { return &___destroy_2; }
	inline void set_destroy_2(bool value)
	{
		___destroy_2 = value;
	}

	inline static int32_t get_offset_of_countdown_3() { return static_cast<int32_t>(offsetof(Coins_t826700442, ___countdown_3)); }
	inline float get_countdown_3() const { return ___countdown_3; }
	inline float* get_address_of_countdown_3() { return &___countdown_3; }
	inline void set_countdown_3(float value)
	{
		___countdown_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
