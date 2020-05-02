#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// Grounded
struct Grounded_t2556383450;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player1
struct  Player1_t3043765108  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Player1::anim
	Animator_t69676727 * ___anim_2;
	// UnityEngine.Rigidbody2D Player1::rb2d
	Rigidbody2D_t502193897 * ___rb2d_3;
	// Grounded Player1::grounded
	Grounded_t2556383450 * ___grounded_4;
	// System.Boolean Player1::goLeft
	bool ___goLeft_5;
	// System.Boolean Player1::goRight
	bool ___goRight_6;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(Player1_t3043765108, ___anim_2)); }
	inline Animator_t69676727 * get_anim_2() const { return ___anim_2; }
	inline Animator_t69676727 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t69676727 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_rb2d_3() { return static_cast<int32_t>(offsetof(Player1_t3043765108, ___rb2d_3)); }
	inline Rigidbody2D_t502193897 * get_rb2d_3() const { return ___rb2d_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_3() { return &___rb2d_3; }
	inline void set_rb2d_3(Rigidbody2D_t502193897 * value)
	{
		___rb2d_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_3, value);
	}

	inline static int32_t get_offset_of_grounded_4() { return static_cast<int32_t>(offsetof(Player1_t3043765108, ___grounded_4)); }
	inline Grounded_t2556383450 * get_grounded_4() const { return ___grounded_4; }
	inline Grounded_t2556383450 ** get_address_of_grounded_4() { return &___grounded_4; }
	inline void set_grounded_4(Grounded_t2556383450 * value)
	{
		___grounded_4 = value;
		Il2CppCodeGenWriteBarrier(&___grounded_4, value);
	}

	inline static int32_t get_offset_of_goLeft_5() { return static_cast<int32_t>(offsetof(Player1_t3043765108, ___goLeft_5)); }
	inline bool get_goLeft_5() const { return ___goLeft_5; }
	inline bool* get_address_of_goLeft_5() { return &___goLeft_5; }
	inline void set_goLeft_5(bool value)
	{
		___goLeft_5 = value;
	}

	inline static int32_t get_offset_of_goRight_6() { return static_cast<int32_t>(offsetof(Player1_t3043765108, ___goRight_6)); }
	inline bool get_goRight_6() const { return ___goRight_6; }
	inline bool* get_address_of_goRight_6() { return &___goRight_6; }
	inline void set_goRight_6(bool value)
	{
		___goRight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
