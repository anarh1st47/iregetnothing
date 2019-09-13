#pragma once
#include <functional>

struct c_actor;
struct c_pawn;

struct c_level
{
	char pad_0000[44]; //0x0000
	c_actor** actorlist; //0x002C
	int cnt_ents; //0x30
	char pad_0030[0xd0 - 0x30 - 8];//0x34
	double unk_meme;
	void for_each_player(std::function<void(c_pawn*)> f);
};
