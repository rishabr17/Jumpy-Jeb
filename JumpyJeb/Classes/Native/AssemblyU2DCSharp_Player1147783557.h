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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Player::anim
	Animator_t69676727 * ___anim_2;
	// UnityEngine.Rigidbody2D Player::rb2d
	Rigidbody2D_t502193897 * ___rb2d_3;
	// Grounded Player::grounded
	Grounded_t2556383450 * ___grounded_4;
	// System.Boolean Player::doublejump
	bool ___doublejump_5;
	// System.Boolean Player::goLeft
	bool ___goLeft_6;
	// System.Boolean Player::goRight
	bool ___goRight_7;
	// System.Int32 Player::currenthealth
	int32_t ___currenthealth_8;
	// System.Int32 Player::points
	int32_t ___points_9;
	// System.Boolean Player::colorswitch
	bool ___colorswitch_10;
	// System.Single Player::colortime
	float ___colortime_11;
	// System.Int32 Player::colornumber
	int32_t ___colornumber_12;
	// System.Boolean Player::coloronce
	bool ___coloronce_13;
	// UnityEngine.UI.Image Player::image
	Image_t2042527209 * ___image_14;
	// UnityEngine.Sprite[] Player::heartsprites
	SpriteU5BU5D_t3359083662* ___heartsprites_15;
	// System.Single Player::hitcooldown
	float ___hitcooldown_16;
	// UnityEngine.GameObject Player::whitesheet
	GameObject_t1756533147 * ___whitesheet_17;
	// UnityEngine.AudioSource Player::audio
	AudioSource_t1135106623 * ___audio_18;
	// UnityEngine.AudioClip Player::hitsound
	AudioClip_t1932558630 * ___hitsound_19;
	// UnityEngine.AudioClip Player::jumpsound
	AudioClip_t1932558630 * ___jumpsound_20;
	// UnityEngine.AudioClip Player::coinsound
	AudioClip_t1932558630 * ___coinsound_21;
	// System.Boolean Player::triplejump
	bool ___triplejump_22;
	// UnityEngine.SpriteRenderer Player::self
	SpriteRenderer_t1209076198 * ___self_23;
	// System.Boolean Player::normaljeb
	bool ___normaljeb_24;
	// System.Boolean Player::rocketjeb
	bool ___rocketjeb_25;
	// System.Boolean Player::speedyjeb
	bool ___speedyjeb_26;
	// System.Boolean Player::astrojeb
	bool ___astrojeb_27;
	// System.Boolean Player::deathjeb
	bool ___deathjeb_28;
	// System.Boolean Player::moneyjeb
	bool ___moneyjeb_29;
	// System.Boolean Player::goldenjeb
	bool ___goldenjeb_30;
	// UnityEngine.Sprite Player::normal
	Sprite_t309593783 * ___normal_31;
	// UnityEngine.Sprite Player::rocket
	Sprite_t309593783 * ___rocket_32;
	// UnityEngine.Sprite Player::speedy
	Sprite_t309593783 * ___speedy_33;
	// UnityEngine.Sprite Player::astro
	Sprite_t309593783 * ___astro_34;
	// UnityEngine.Sprite Player::death
	Sprite_t309593783 * ___death_35;
	// UnityEngine.Sprite Player::money
	Sprite_t309593783 * ___money_36;
	// UnityEngine.Sprite Player::golden
	Sprite_t309593783 * ___golden_37;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___anim_2)); }
	inline Animator_t69676727 * get_anim_2() const { return ___anim_2; }
	inline Animator_t69676727 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t69676727 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_rb2d_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rb2d_3)); }
	inline Rigidbody2D_t502193897 * get_rb2d_3() const { return ___rb2d_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_3() { return &___rb2d_3; }
	inline void set_rb2d_3(Rigidbody2D_t502193897 * value)
	{
		___rb2d_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_3, value);
	}

	inline static int32_t get_offset_of_grounded_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___grounded_4)); }
	inline Grounded_t2556383450 * get_grounded_4() const { return ___grounded_4; }
	inline Grounded_t2556383450 ** get_address_of_grounded_4() { return &___grounded_4; }
	inline void set_grounded_4(Grounded_t2556383450 * value)
	{
		___grounded_4 = value;
		Il2CppCodeGenWriteBarrier(&___grounded_4, value);
	}

	inline static int32_t get_offset_of_doublejump_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___doublejump_5)); }
	inline bool get_doublejump_5() const { return ___doublejump_5; }
	inline bool* get_address_of_doublejump_5() { return &___doublejump_5; }
	inline void set_doublejump_5(bool value)
	{
		___doublejump_5 = value;
	}

	inline static int32_t get_offset_of_goLeft_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___goLeft_6)); }
	inline bool get_goLeft_6() const { return ___goLeft_6; }
	inline bool* get_address_of_goLeft_6() { return &___goLeft_6; }
	inline void set_goLeft_6(bool value)
	{
		___goLeft_6 = value;
	}

	inline static int32_t get_offset_of_goRight_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___goRight_7)); }
	inline bool get_goRight_7() const { return ___goRight_7; }
	inline bool* get_address_of_goRight_7() { return &___goRight_7; }
	inline void set_goRight_7(bool value)
	{
		___goRight_7 = value;
	}

	inline static int32_t get_offset_of_currenthealth_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___currenthealth_8)); }
	inline int32_t get_currenthealth_8() const { return ___currenthealth_8; }
	inline int32_t* get_address_of_currenthealth_8() { return &___currenthealth_8; }
	inline void set_currenthealth_8(int32_t value)
	{
		___currenthealth_8 = value;
	}

	inline static int32_t get_offset_of_points_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___points_9)); }
	inline int32_t get_points_9() const { return ___points_9; }
	inline int32_t* get_address_of_points_9() { return &___points_9; }
	inline void set_points_9(int32_t value)
	{
		___points_9 = value;
	}

	inline static int32_t get_offset_of_colorswitch_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___colorswitch_10)); }
	inline bool get_colorswitch_10() const { return ___colorswitch_10; }
	inline bool* get_address_of_colorswitch_10() { return &___colorswitch_10; }
	inline void set_colorswitch_10(bool value)
	{
		___colorswitch_10 = value;
	}

	inline static int32_t get_offset_of_colortime_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___colortime_11)); }
	inline float get_colortime_11() const { return ___colortime_11; }
	inline float* get_address_of_colortime_11() { return &___colortime_11; }
	inline void set_colortime_11(float value)
	{
		___colortime_11 = value;
	}

	inline static int32_t get_offset_of_colornumber_12() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___colornumber_12)); }
	inline int32_t get_colornumber_12() const { return ___colornumber_12; }
	inline int32_t* get_address_of_colornumber_12() { return &___colornumber_12; }
	inline void set_colornumber_12(int32_t value)
	{
		___colornumber_12 = value;
	}

	inline static int32_t get_offset_of_coloronce_13() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___coloronce_13)); }
	inline bool get_coloronce_13() const { return ___coloronce_13; }
	inline bool* get_address_of_coloronce_13() { return &___coloronce_13; }
	inline void set_coloronce_13(bool value)
	{
		___coloronce_13 = value;
	}

	inline static int32_t get_offset_of_image_14() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___image_14)); }
	inline Image_t2042527209 * get_image_14() const { return ___image_14; }
	inline Image_t2042527209 ** get_address_of_image_14() { return &___image_14; }
	inline void set_image_14(Image_t2042527209 * value)
	{
		___image_14 = value;
		Il2CppCodeGenWriteBarrier(&___image_14, value);
	}

	inline static int32_t get_offset_of_heartsprites_15() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___heartsprites_15)); }
	inline SpriteU5BU5D_t3359083662* get_heartsprites_15() const { return ___heartsprites_15; }
	inline SpriteU5BU5D_t3359083662** get_address_of_heartsprites_15() { return &___heartsprites_15; }
	inline void set_heartsprites_15(SpriteU5BU5D_t3359083662* value)
	{
		___heartsprites_15 = value;
		Il2CppCodeGenWriteBarrier(&___heartsprites_15, value);
	}

	inline static int32_t get_offset_of_hitcooldown_16() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___hitcooldown_16)); }
	inline float get_hitcooldown_16() const { return ___hitcooldown_16; }
	inline float* get_address_of_hitcooldown_16() { return &___hitcooldown_16; }
	inline void set_hitcooldown_16(float value)
	{
		___hitcooldown_16 = value;
	}

	inline static int32_t get_offset_of_whitesheet_17() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___whitesheet_17)); }
	inline GameObject_t1756533147 * get_whitesheet_17() const { return ___whitesheet_17; }
	inline GameObject_t1756533147 ** get_address_of_whitesheet_17() { return &___whitesheet_17; }
	inline void set_whitesheet_17(GameObject_t1756533147 * value)
	{
		___whitesheet_17 = value;
		Il2CppCodeGenWriteBarrier(&___whitesheet_17, value);
	}

	inline static int32_t get_offset_of_audio_18() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___audio_18)); }
	inline AudioSource_t1135106623 * get_audio_18() const { return ___audio_18; }
	inline AudioSource_t1135106623 ** get_address_of_audio_18() { return &___audio_18; }
	inline void set_audio_18(AudioSource_t1135106623 * value)
	{
		___audio_18 = value;
		Il2CppCodeGenWriteBarrier(&___audio_18, value);
	}

	inline static int32_t get_offset_of_hitsound_19() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___hitsound_19)); }
	inline AudioClip_t1932558630 * get_hitsound_19() const { return ___hitsound_19; }
	inline AudioClip_t1932558630 ** get_address_of_hitsound_19() { return &___hitsound_19; }
	inline void set_hitsound_19(AudioClip_t1932558630 * value)
	{
		___hitsound_19 = value;
		Il2CppCodeGenWriteBarrier(&___hitsound_19, value);
	}

	inline static int32_t get_offset_of_jumpsound_20() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___jumpsound_20)); }
	inline AudioClip_t1932558630 * get_jumpsound_20() const { return ___jumpsound_20; }
	inline AudioClip_t1932558630 ** get_address_of_jumpsound_20() { return &___jumpsound_20; }
	inline void set_jumpsound_20(AudioClip_t1932558630 * value)
	{
		___jumpsound_20 = value;
		Il2CppCodeGenWriteBarrier(&___jumpsound_20, value);
	}

	inline static int32_t get_offset_of_coinsound_21() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___coinsound_21)); }
	inline AudioClip_t1932558630 * get_coinsound_21() const { return ___coinsound_21; }
	inline AudioClip_t1932558630 ** get_address_of_coinsound_21() { return &___coinsound_21; }
	inline void set_coinsound_21(AudioClip_t1932558630 * value)
	{
		___coinsound_21 = value;
		Il2CppCodeGenWriteBarrier(&___coinsound_21, value);
	}

	inline static int32_t get_offset_of_triplejump_22() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___triplejump_22)); }
	inline bool get_triplejump_22() const { return ___triplejump_22; }
	inline bool* get_address_of_triplejump_22() { return &___triplejump_22; }
	inline void set_triplejump_22(bool value)
	{
		___triplejump_22 = value;
	}

	inline static int32_t get_offset_of_self_23() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___self_23)); }
	inline SpriteRenderer_t1209076198 * get_self_23() const { return ___self_23; }
	inline SpriteRenderer_t1209076198 ** get_address_of_self_23() { return &___self_23; }
	inline void set_self_23(SpriteRenderer_t1209076198 * value)
	{
		___self_23 = value;
		Il2CppCodeGenWriteBarrier(&___self_23, value);
	}

	inline static int32_t get_offset_of_normaljeb_24() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___normaljeb_24)); }
	inline bool get_normaljeb_24() const { return ___normaljeb_24; }
	inline bool* get_address_of_normaljeb_24() { return &___normaljeb_24; }
	inline void set_normaljeb_24(bool value)
	{
		___normaljeb_24 = value;
	}

	inline static int32_t get_offset_of_rocketjeb_25() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rocketjeb_25)); }
	inline bool get_rocketjeb_25() const { return ___rocketjeb_25; }
	inline bool* get_address_of_rocketjeb_25() { return &___rocketjeb_25; }
	inline void set_rocketjeb_25(bool value)
	{
		___rocketjeb_25 = value;
	}

	inline static int32_t get_offset_of_speedyjeb_26() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___speedyjeb_26)); }
	inline bool get_speedyjeb_26() const { return ___speedyjeb_26; }
	inline bool* get_address_of_speedyjeb_26() { return &___speedyjeb_26; }
	inline void set_speedyjeb_26(bool value)
	{
		___speedyjeb_26 = value;
	}

	inline static int32_t get_offset_of_astrojeb_27() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___astrojeb_27)); }
	inline bool get_astrojeb_27() const { return ___astrojeb_27; }
	inline bool* get_address_of_astrojeb_27() { return &___astrojeb_27; }
	inline void set_astrojeb_27(bool value)
	{
		___astrojeb_27 = value;
	}

	inline static int32_t get_offset_of_deathjeb_28() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___deathjeb_28)); }
	inline bool get_deathjeb_28() const { return ___deathjeb_28; }
	inline bool* get_address_of_deathjeb_28() { return &___deathjeb_28; }
	inline void set_deathjeb_28(bool value)
	{
		___deathjeb_28 = value;
	}

	inline static int32_t get_offset_of_moneyjeb_29() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moneyjeb_29)); }
	inline bool get_moneyjeb_29() const { return ___moneyjeb_29; }
	inline bool* get_address_of_moneyjeb_29() { return &___moneyjeb_29; }
	inline void set_moneyjeb_29(bool value)
	{
		___moneyjeb_29 = value;
	}

	inline static int32_t get_offset_of_goldenjeb_30() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___goldenjeb_30)); }
	inline bool get_goldenjeb_30() const { return ___goldenjeb_30; }
	inline bool* get_address_of_goldenjeb_30() { return &___goldenjeb_30; }
	inline void set_goldenjeb_30(bool value)
	{
		___goldenjeb_30 = value;
	}

	inline static int32_t get_offset_of_normal_31() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___normal_31)); }
	inline Sprite_t309593783 * get_normal_31() const { return ___normal_31; }
	inline Sprite_t309593783 ** get_address_of_normal_31() { return &___normal_31; }
	inline void set_normal_31(Sprite_t309593783 * value)
	{
		___normal_31 = value;
		Il2CppCodeGenWriteBarrier(&___normal_31, value);
	}

	inline static int32_t get_offset_of_rocket_32() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rocket_32)); }
	inline Sprite_t309593783 * get_rocket_32() const { return ___rocket_32; }
	inline Sprite_t309593783 ** get_address_of_rocket_32() { return &___rocket_32; }
	inline void set_rocket_32(Sprite_t309593783 * value)
	{
		___rocket_32 = value;
		Il2CppCodeGenWriteBarrier(&___rocket_32, value);
	}

	inline static int32_t get_offset_of_speedy_33() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___speedy_33)); }
	inline Sprite_t309593783 * get_speedy_33() const { return ___speedy_33; }
	inline Sprite_t309593783 ** get_address_of_speedy_33() { return &___speedy_33; }
	inline void set_speedy_33(Sprite_t309593783 * value)
	{
		___speedy_33 = value;
		Il2CppCodeGenWriteBarrier(&___speedy_33, value);
	}

	inline static int32_t get_offset_of_astro_34() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___astro_34)); }
	inline Sprite_t309593783 * get_astro_34() const { return ___astro_34; }
	inline Sprite_t309593783 ** get_address_of_astro_34() { return &___astro_34; }
	inline void set_astro_34(Sprite_t309593783 * value)
	{
		___astro_34 = value;
		Il2CppCodeGenWriteBarrier(&___astro_34, value);
	}

	inline static int32_t get_offset_of_death_35() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___death_35)); }
	inline Sprite_t309593783 * get_death_35() const { return ___death_35; }
	inline Sprite_t309593783 ** get_address_of_death_35() { return &___death_35; }
	inline void set_death_35(Sprite_t309593783 * value)
	{
		___death_35 = value;
		Il2CppCodeGenWriteBarrier(&___death_35, value);
	}

	inline static int32_t get_offset_of_money_36() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___money_36)); }
	inline Sprite_t309593783 * get_money_36() const { return ___money_36; }
	inline Sprite_t309593783 ** get_address_of_money_36() { return &___money_36; }
	inline void set_money_36(Sprite_t309593783 * value)
	{
		___money_36 = value;
		Il2CppCodeGenWriteBarrier(&___money_36, value);
	}

	inline static int32_t get_offset_of_golden_37() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___golden_37)); }
	inline Sprite_t309593783 * get_golden_37() const { return ___golden_37; }
	inline Sprite_t309593783 ** get_address_of_golden_37() { return &___golden_37; }
	inline void set_golden_37(Sprite_t309593783 * value)
	{
		___golden_37 = value;
		Il2CppCodeGenWriteBarrier(&___golden_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
