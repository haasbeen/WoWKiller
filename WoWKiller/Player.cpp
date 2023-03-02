#include "Player.h"

//mobs(maybe different types like : slime, goblin, ogre, dragon(rare))
/*attributes of a mob:
- crit chance
- miss chance
- max health
- current health
- base damage*/

Player::Player() {
	current_health = 1000;
	max_health = 1000;
	base_damage = 100;
	crit_chance = 100.0;
	crit_damage = base_damage * 2;

};
