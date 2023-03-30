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
	int crit_chance;
	int crit_damage;
	int miss_chance;
	int dodge_chance;
	int parry_chance;
	int block_chance;

	void attack(Actor &actor);

	bool is_dead();

	bool is_alive();

};

