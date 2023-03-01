#include "Actor.h"


void Actor::attack(Actor& actor) {
	actor.current_health = actor.current_health - base_damage;
	cout << "Current health is now " << actor.current_health << endl;
};

