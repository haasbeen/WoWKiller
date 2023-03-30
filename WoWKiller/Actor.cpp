#include "Actor.h"
#include "util.h"


void Actor::attack(Actor& actor) {
	int damage = base_damage;
	if (util::rng(miss_chance)) {
		cout << "I missed" <<endl;
		return;
	}
	else if (util::rng(crit_chance)) {
		damage = crit_damage;
	}
	actor.current_health = actor.current_health - damage;
};

bool Actor::is_dead() {
	return current_health <= 0;

};
bool Actor::is_alive() {
	return !is_dead();
};
