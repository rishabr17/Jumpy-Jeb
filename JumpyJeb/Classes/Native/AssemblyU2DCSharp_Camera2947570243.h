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
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Camera
struct  Camera_t2947570243  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Camera::player
	GameObject_t1756533147 * ___player_2;
	// System.Single Camera::distanceToMove
	float ___distanceToMove_3;
	// UnityEngine.Vector3 Camera::playerposition
	Vector3_t2243707580  ___playerposition_4;
	// UnityEngine.GameObject Camera::pausescreen
	GameObject_t1756533147 * ___pausescreen_5;
	// UnityEngine.UI.Button Camera::button1
	Button_t2872111280 * ___button1_6;
	// UnityEngine.UI.Button Camera::button2
	Button_t2872111280 * ___button2_7;
	// UnityEngine.UI.Button Camera::button3
	Button_t2872111280 * ___button3_8;
	// UnityEngine.UI.Button Camera::button4
	Button_t2872111280 * ___button4_9;
	// System.Boolean Camera::pause
	bool ___pause_10;
	// System.Boolean Camera::bossdead
	bool ___bossdead_11;
	// System.Boolean Camera::boss
	bool ___boss_12;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_distanceToMove_3() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___distanceToMove_3)); }
	inline float get_distanceToMove_3() const { return ___distanceToMove_3; }
	inline float* get_address_of_distanceToMove_3() { return &___distanceToMove_3; }
	inline void set_distanceToMove_3(float value)
	{
		___distanceToMove_3 = value;
	}

	inline static int32_t get_offset_of_playerposition_4() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___playerposition_4)); }
	inline Vector3_t2243707580  get_playerposition_4() const { return ___playerposition_4; }
	inline Vector3_t2243707580 * get_address_of_playerposition_4() { return &___playerposition_4; }
	inline void set_playerposition_4(Vector3_t2243707580  value)
	{
		___playerposition_4 = value;
	}

	inline static int32_t get_offset_of_pausescreen_5() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___pausescreen_5)); }
	inline GameObject_t1756533147 * get_pausescreen_5() const { return ___pausescreen_5; }
	inline GameObject_t1756533147 ** get_address_of_pausescreen_5() { return &___pausescreen_5; }
	inline void set_pausescreen_5(GameObject_t1756533147 * value)
	{
		___pausescreen_5 = value;
		Il2CppCodeGenWriteBarrier(&___pausescreen_5, value);
	}

	inline static int32_t get_offset_of_button1_6() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___button1_6)); }
	inline Button_t2872111280 * get_button1_6() const { return ___button1_6; }
	inline Button_t2872111280 ** get_address_of_button1_6() { return &___button1_6; }
	inline void set_button1_6(Button_t2872111280 * value)
	{
		___button1_6 = value;
		Il2CppCodeGenWriteBarrier(&___button1_6, value);
	}

	inline static int32_t get_offset_of_button2_7() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___button2_7)); }
	inline Button_t2872111280 * get_button2_7() const { return ___button2_7; }
	inline Button_t2872111280 ** get_address_of_button2_7() { return &___button2_7; }
	inline void set_button2_7(Button_t2872111280 * value)
	{
		___button2_7 = value;
		Il2CppCodeGenWriteBarrier(&___button2_7, value);
	}

	inline static int32_t get_offset_of_button3_8() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___button3_8)); }
	inline Button_t2872111280 * get_button3_8() const { return ___button3_8; }
	inline Button_t2872111280 ** get_address_of_button3_8() { return &___button3_8; }
	inline void set_button3_8(Button_t2872111280 * value)
	{
		___button3_8 = value;
		Il2CppCodeGenWriteBarrier(&___button3_8, value);
	}

	inline static int32_t get_offset_of_button4_9() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___button4_9)); }
	inline Button_t2872111280 * get_button4_9() const { return ___button4_9; }
	inline Button_t2872111280 ** get_address_of_button4_9() { return &___button4_9; }
	inline void set_button4_9(Button_t2872111280 * value)
	{
		___button4_9 = value;
		Il2CppCodeGenWriteBarrier(&___button4_9, value);
	}

	inline static int32_t get_offset_of_pause_10() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___pause_10)); }
	inline bool get_pause_10() const { return ___pause_10; }
	inline bool* get_address_of_pause_10() { return &___pause_10; }
	inline void set_pause_10(bool value)
	{
		___pause_10 = value;
	}

	inline static int32_t get_offset_of_bossdead_11() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___bossdead_11)); }
	inline bool get_bossdead_11() const { return ___bossdead_11; }
	inline bool* get_address_of_bossdead_11() { return &___bossdead_11; }
	inline void set_bossdead_11(bool value)
	{
		___bossdead_11 = value;
	}

	inline static int32_t get_offset_of_boss_12() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___boss_12)); }
	inline bool get_boss_12() const { return ___boss_12; }
	inline bool* get_address_of_boss_12() { return &___boss_12; }
	inline void set_boss_12(bool value)
	{
		___boss_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
