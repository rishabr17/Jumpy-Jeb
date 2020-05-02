#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Eyeball
struct  Eyeball_t4187801996  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Eyeball::player
	GameObject_t1756533147 * ___player_2;
	// System.Single Eyeball::speed
	float ___speed_3;
	// System.Boolean Eyeball::closed
	bool ___closed_4;
	// System.Single Eyeball::closetime
	float ___closetime_5;
	// UnityEngine.GameObject Eyeball::bullet
	GameObject_t1756533147 * ___bullet_6;
	// System.Single Eyeball::bulletspeed
	float ___bulletspeed_7;
	// UnityEngine.Vector3 Eyeball::movepoint
	Vector3_t2243707580  ___movepoint_8;
	// UnityEngine.GameObject Eyeball::destroypoint
	GameObject_t1756533147 * ___destroypoint_9;
	// System.Single Eyeball::slope
	float ___slope_10;
	// System.Boolean Eyeball::rightside
	bool ___rightside_11;
	// UnityEngine.GameObject Eyeball::platformpointahead
	GameObject_t1756533147 * ___platformpointahead_12;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_closed_4() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___closed_4)); }
	inline bool get_closed_4() const { return ___closed_4; }
	inline bool* get_address_of_closed_4() { return &___closed_4; }
	inline void set_closed_4(bool value)
	{
		___closed_4 = value;
	}

	inline static int32_t get_offset_of_closetime_5() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___closetime_5)); }
	inline float get_closetime_5() const { return ___closetime_5; }
	inline float* get_address_of_closetime_5() { return &___closetime_5; }
	inline void set_closetime_5(float value)
	{
		___closetime_5 = value;
	}

	inline static int32_t get_offset_of_bullet_6() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___bullet_6)); }
	inline GameObject_t1756533147 * get_bullet_6() const { return ___bullet_6; }
	inline GameObject_t1756533147 ** get_address_of_bullet_6() { return &___bullet_6; }
	inline void set_bullet_6(GameObject_t1756533147 * value)
	{
		___bullet_6 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_6, value);
	}

	inline static int32_t get_offset_of_bulletspeed_7() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___bulletspeed_7)); }
	inline float get_bulletspeed_7() const { return ___bulletspeed_7; }
	inline float* get_address_of_bulletspeed_7() { return &___bulletspeed_7; }
	inline void set_bulletspeed_7(float value)
	{
		___bulletspeed_7 = value;
	}

	inline static int32_t get_offset_of_movepoint_8() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___movepoint_8)); }
	inline Vector3_t2243707580  get_movepoint_8() const { return ___movepoint_8; }
	inline Vector3_t2243707580 * get_address_of_movepoint_8() { return &___movepoint_8; }
	inline void set_movepoint_8(Vector3_t2243707580  value)
	{
		___movepoint_8 = value;
	}

	inline static int32_t get_offset_of_destroypoint_9() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___destroypoint_9)); }
	inline GameObject_t1756533147 * get_destroypoint_9() const { return ___destroypoint_9; }
	inline GameObject_t1756533147 ** get_address_of_destroypoint_9() { return &___destroypoint_9; }
	inline void set_destroypoint_9(GameObject_t1756533147 * value)
	{
		___destroypoint_9 = value;
		Il2CppCodeGenWriteBarrier(&___destroypoint_9, value);
	}

	inline static int32_t get_offset_of_slope_10() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___slope_10)); }
	inline float get_slope_10() const { return ___slope_10; }
	inline float* get_address_of_slope_10() { return &___slope_10; }
	inline void set_slope_10(float value)
	{
		___slope_10 = value;
	}

	inline static int32_t get_offset_of_rightside_11() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___rightside_11)); }
	inline bool get_rightside_11() const { return ___rightside_11; }
	inline bool* get_address_of_rightside_11() { return &___rightside_11; }
	inline void set_rightside_11(bool value)
	{
		___rightside_11 = value;
	}

	inline static int32_t get_offset_of_platformpointahead_12() { return static_cast<int32_t>(offsetof(Eyeball_t4187801996, ___platformpointahead_12)); }
	inline GameObject_t1756533147 * get_platformpointahead_12() const { return ___platformpointahead_12; }
	inline GameObject_t1756533147 ** get_address_of_platformpointahead_12() { return &___platformpointahead_12; }
	inline void set_platformpointahead_12(GameObject_t1756533147 * value)
	{
		___platformpointahead_12 = value;
		Il2CppCodeGenWriteBarrier(&___platformpointahead_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
