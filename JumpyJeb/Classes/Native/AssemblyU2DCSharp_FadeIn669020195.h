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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadeIn
struct  FadeIn_t669020195  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.SpriteRenderer FadeIn::spriterenderer
	SpriteRenderer_t1209076198 * ___spriterenderer_2;
	// System.Single FadeIn::alpha
	float ___alpha_3;

public:
	inline static int32_t get_offset_of_spriterenderer_2() { return static_cast<int32_t>(offsetof(FadeIn_t669020195, ___spriterenderer_2)); }
	inline SpriteRenderer_t1209076198 * get_spriterenderer_2() const { return ___spriterenderer_2; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriterenderer_2() { return &___spriterenderer_2; }
	inline void set_spriterenderer_2(SpriteRenderer_t1209076198 * value)
	{
		___spriterenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___spriterenderer_2, value);
	}

	inline static int32_t get_offset_of_alpha_3() { return static_cast<int32_t>(offsetof(FadeIn_t669020195, ___alpha_3)); }
	inline float get_alpha_3() const { return ___alpha_3; }
	inline float* get_address_of_alpha_3() { return &___alpha_3; }
	inline void set_alpha_3(float value)
	{
		___alpha_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
