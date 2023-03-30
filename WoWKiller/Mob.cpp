#include "Mob.h"

//mobs(maybe different types like : slime, goblin, ogre, dragon(rare))
/*attributes of a mob:
- crit chance
- miss chance
- max health
- current health
- base damage*/

Mob::Mob() {
	current_health = 500;
	max_health = 500;
	base_damage = 5;
	crit_chance = 60;
	crit_damage = base_damage * 2;
	miss_chance = 5;
	dodge_chance = 0;
	parry_chance = 0;
	block_chance = 0;

};



