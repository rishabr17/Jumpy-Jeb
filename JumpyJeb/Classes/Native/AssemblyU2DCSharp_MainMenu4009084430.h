#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t4009084430  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean MainMenu::gamestart
	bool ___gamestart_2;
	// System.Boolean MainMenu::mainmenustart
	bool ___mainmenustart_3;
	// System.Boolean MainMenu::storestart
	bool ___storestart_4;
	// UnityEngine.SpriteRenderer MainMenu::fadeout
	SpriteRenderer_t1209076198 * ___fadeout_5;
	// System.Single MainMenu::alpha
	float ___alpha_6;
	// UnityEngine.GameObject MainMenu::camera
	GameObject_t1756533147 * ___camera_7;

public:
	inline static int32_t get_offset_of_gamestart_2() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___gamestart_2)); }
	inline bool get_gamestart_2() const { return ___gamestart_2; }
	inline bool* get_address_of_gamestart_2() { return &___gamestart_2; }
	inline void set_gamestart_2(bool value)
	{
		___gamestart_2 = value;
	}

	inline static int32_t get_offset_of_mainmenustart_3() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___mainmenustart_3)); }
	inline bool get_mainmenustart_3() const { return ___mainmenustart_3; }
	inline bool* get_address_of_mainmenustart_3() { return &___mainmenustart_3; }
	inline void set_mainmenustart_3(bool value)
	{
		___mainmenustart_3 = value;
	}

	inline static int32_t get_offset_of_storestart_4() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___storestart_4)); }
	inline bool get_storestart_4() const { return ___storestart_4; }
	inline bool* get_address_of_storestart_4() { return &___storestart_4; }
	inline void set_storestart_4(bool value)
	{
		___storestart_4 = value;
	}

	inline static int32_t get_offset_of_fadeout_5() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___fadeout_5)); }
	inline SpriteRenderer_t1209076198 * get_fadeout_5() const { return ___fadeout_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of_fadeout_5() { return &___fadeout_5; }
	inline void set_fadeout_5(SpriteRenderer_t1209076198 * value)
	{
		___fadeout_5 = value;
		Il2CppCodeGenWriteBarrier(&___fadeout_5, value);
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___alpha_6)); }
	inline float get_alpha_6() const { return ___alpha_6; }
	inline float* get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(float value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_camera_7() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___camera_7)); }
	inline GameObject_t1756533147 * get_camera_7() const { return ___camera_7; }
	inline GameObject_t1756533147 ** get_address_of_camera_7() { return &___camera_7; }
	inline void set_camera_7(GameObject_t1756533147 * value)
	{
		___camera_7 = value;
		Il2CppCodeGenWriteBarrier(&___camera_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
