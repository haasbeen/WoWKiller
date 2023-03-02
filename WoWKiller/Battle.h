#pragma once

#include <iostream>
#include <string>
#include "Mob.h"
#include "Player.h"

using namespace std;

class Battle {

public:
	
	Player* player;
	Mob* mob;

	Battle(Player& player, Mob& mob);

	void start();

	void print_state();

};
