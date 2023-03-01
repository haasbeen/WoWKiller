#include "Battle.h"

Battle::Battle(Player& player, Mob& mob) {
	this->player = &player;
	this->mob = &mob;

};

void Battle::start() {
	player->attack(*mob);
	mob->attack(*player);
	
}