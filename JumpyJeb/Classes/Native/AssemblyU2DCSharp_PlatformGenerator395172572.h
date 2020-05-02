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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformGenerator
struct  PlatformGenerator_t395172572  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlatformGenerator::camerapoint
	GameObject_t1756533147 * ___camerapoint_2;
	// UnityEngine.GameObject PlatformGenerator::backgroundpoint
	GameObject_t1756533147 * ___backgroundpoint_3;
	// UnityEngine.GameObject PlatformGenerator::destroyPointfront
	GameObject_t1756533147 * ___destroyPointfront_4;
	// UnityEngine.Rigidbody2D PlatformGenerator::rb2d
	Rigidbody2D_t502193897 * ___rb2d_5;
	// System.Single PlatformGenerator::delay
	float ___delay_6;

public:
	inline static int32_t get_offset_of_camerapoint_2() { return static_cast<int32_t>(offsetof(PlatformGenerator_t395172572, ___camerapoint_2)); }
	inline GameObject_t1756533147 * get_camerapoint_2() const { return ___camerapoint_2; }
	inline GameObject_t1756533147 ** get_address_of_camerapoint_2() { return &___camerapoint_2; }
	inline void set_camerapoint_2(GameObject_t1756533147 * value)
	{
		___camerapoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___camerapoint_2, value);
	}

	inline static int32_t get_offset_of_backgroundpoint_3() { return static_cast<int32_t>(offsetof(PlatformGenerator_t395172572, ___backgroundpoint_3)); }
	inline GameObject_t1756533147 * get_backgroundpoint_3() const { return ___backgroundpoint_3; }
	inline GameObject_t1756533147 ** get_address_of_backgroundpoint_3() { return &___backgroundpoint_3; }
	inline void set_backgroundpoint_3(GameObject_t1756533147 * value)
	{
		___backgroundpoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundpoint_3, value);
	}

	inline static int32_t get_offset_of_destroyPointfront_4() { return static_cast<int32_t>(offsetof(PlatformGenerator_t395172572, ___destroyPointfront_4)); }
	inline GameObject_t1756533147 * get_destroyPointfront_4() const { return ___destroyPointfront_4; }
	inline GameObject_t1756533147 ** get_address_of_destroyPointfront_4() { return &___destroyPointfront_4; }
	inline void set_destroyPointfront_4(GameObject_t1756533147 * value)
	{
		___destroyPointfront_4 = value;
		Il2CppCodeGenWriteBarrier(&___destroyPointfront_4, value);
	}

	inline static int32_t get_offset_of_rb2d_5() { return static_cast<int32_t>(offsetof(PlatformGenerator_t395172572, ___rb2d_5)); }
	inline Rigidbody2D_t502193897 * get_rb2d_5() const { return ___rb2d_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_5() { return &___rb2d_5; }
	inline void set_rb2d_5(Rigidbody2D_t502193897 * value)
	{
		___rb2d_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_5, value);
	}

	inline static int32_t get_offset_of_delay_6() { return static_cast<int32_t>(offsetof(PlatformGenerator_t395172572, ___delay_6)); }
	inline float get_delay_6() const { return ___delay_6; }
	inline float* get_address_of_delay_6() { return &___delay_6; }
	inline void set_delay_6(float value)
	{
		___delay_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
