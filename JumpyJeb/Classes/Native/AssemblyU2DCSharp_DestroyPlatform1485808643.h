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

// DestroyPlatform
struct  DestroyPlatform_t1485808643  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DestroyPlatform::platformpointahead
	GameObject_t1756533147 * ___platformpointahead_2;
	// UnityEngine.GameObject DestroyPlatform::platformpointbehind
	GameObject_t1756533147 * ___platformpointbehind_3;

public:
	inline static int32_t get_offset_of_platformpointahead_2() { return static_cast<int32_t>(offsetof(DestroyPlatform_t1485808643, ___platformpointahead_2)); }
	inline GameObject_t1756533147 * get_platformpointahead_2() const { return ___platformpointahead_2; }
	inline GameObject_t1756533147 ** get_address_of_platformpointahead_2() { return &___platformpointahead_2; }
	inline void set_platformpointahead_2(GameObject_t1756533147 * value)
	{
		___platformpointahead_2 = value;
		Il2CppCodeGenWriteBarrier(&___platformpointahead_2, value);
	}

	inline static int32_t get_offset_of_platformpointbehind_3() { return static_cast<int32_t>(offsetof(DestroyPlatform_t1485808643, ___platformpointbehind_3)); }
	inline GameObject_t1756533147 * get_platformpointbehind_3() const { return ___platformpointbehind_3; }
	inline GameObject_t1756533147 ** get_address_of_platformpointbehind_3() { return &___platformpointbehind_3; }
	inline void set_platformpointbehind_3(GameObject_t1756533147 * value)
	{
		___platformpointbehind_3 = value;
		Il2CppCodeGenWriteBarrier(&___platformpointbehind_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
