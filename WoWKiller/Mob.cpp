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
	crit_chance = 10.0;
	crit_damage = base_damage * 2;

};



