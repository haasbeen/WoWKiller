#include "Actor.h"


void Actor::attack(Actor& actor) {
	actor.current_health = actor.current_health - base_damage;
};

bool Actor::is_dead() {
	return current_health <= 0;

};
bool Actor::is_alive() {
	return !is_dead();
};
