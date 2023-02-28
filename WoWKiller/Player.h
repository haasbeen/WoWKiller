#pragma once

#include <iostream>
#include <string>
#include "Mob.h"

using namespace std;

//mobs(maybe different types like : slime, goblin, ogre, dragon(rare))
/*attributes of a mob:
- crit chance
- miss chance
- max health
- current health
- base damage*/

class Player
{
public:
	int current_health;
	int max_health;
	int base_damage;

	Player();
		
	void attack(Mob &mob);
	



}; 
