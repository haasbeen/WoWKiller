#pragma once
#include "Dungeon.h"
#include "Player.h"

class Game {
	
public:

	Player player;
	Dungeon dungeon;

	Game();
	void run();
	void print_state();
	


};