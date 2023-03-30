/*

a fantasy style rpg dungeon crawler

some classes:
- grid (maybe)
- mobs (maybe different types like: slime, goblin, ogre, dragon (rare))
- weapons (2nd phase)
- player
- classes (2nd phase)

attributes of a mob:
- crit chance
- miss chance
- max health
- current health
- base damage

attributes of a player:
- crit chance
- miss chance
- max health
- current health
- base damage

grid:
- 10x10 board
- up, down, left, right
- walls and boundaries
- x = wall

x x x x x x x x   x
x   x x   x x     x
x         x       x
x x   x       x   x
x x   x x x   x x x
x     x       x   x
x   x x x x       x
x     x   x x x   x
x x       x       x
x     x       x   x
x   x x x x x x x x

*/

#include <iostream>
#include <string>
#include "Mob.h"
#include "Player.h"
#include "Battle.h"
#include "util.h"

using namespace std;


int main()
{
	util::init_rng();


	Player player;
	Mob mob;
	Battle battle(player, mob);

	battle.start();


}


