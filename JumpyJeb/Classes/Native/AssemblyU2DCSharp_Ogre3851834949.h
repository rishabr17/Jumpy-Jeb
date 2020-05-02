#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Player
struct Player_t1147783557;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ogre
struct  Ogre_t3851834949  : public MonoBehaviour_t1158329972
{
public:
	// Player Ogre::player
	Player_t1147783557 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Ogre_t3851834949, ___player_2)); }
	inline Player_t1147783557 * get_player_2() const { return ___player_2; }
	inline Player_t1147783557 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Player_t1147783557 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
