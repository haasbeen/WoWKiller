#pragma once

#include <iostream>
#include <string>

using namespace std;

class Actor 
{
public: 
	int current_health;
	int max_health;
	int base_damage;
	float crit_chance;
	float crit_damage;

	void attack(Actor &actor);

};

