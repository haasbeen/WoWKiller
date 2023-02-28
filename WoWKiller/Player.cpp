#include "Player.h"

//mobs(maybe different types like : slime, goblin, ogre, dragon(rare))
/*attributes of a mob:
- crit chance
- miss chance
- max health
- current health
- base damage*/

Player::Player() {
	current_health = 250;
	max_health = 250;
	base_damage = 100;

};

void Player::attack(Mob &mob) {
	mob.current_health = mob.current_health - base_damage;
};
