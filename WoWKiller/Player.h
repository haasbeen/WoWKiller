#pragma once

#include <iostream>
#include <string>
#include "Actor.h"

using namespace std;

//mobs(maybe different types like : slime, goblin, ogre, dragon(rare))
/*attributes of a mob:
- crit chance
- miss chance
- max health
- current health
- base damage*/

class Player : public Actor
{
public:

	Player();
		
	void attack(Actor& actor);
	



}; 
