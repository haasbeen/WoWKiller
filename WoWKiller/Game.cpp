#include "Game.h"
#include "Battle.h"

using namespace std;

Game::Game() {


};
void Game::run() {

	dungeon.generate();

	while (player.is_alive())
	{
		Square square = dungeon.player_location();
		print_state();
		string player_input;
		bool invalid_input = true;
		while (invalid_input)
		{
			cout << "Which direction would you like to explore?" << endl;
			if (square.down)
			{
				cout << "you can go down the dungeon" << endl;
			}
			if (square.left) {
				cout << "you can go left in the dungeon" << endl;
			}
			if (square.up) {
				cout << "you can go up in the dungeon" << endl;
			}
			if (square.right) {
				cout << "you can go right in the dungeon" << endl;
			}
			cin >> player_input;

			if (player_input == "left" || player_input == "run")
			{
				invalid_input = false;
			}
			else {
				cout << "Wrong input" << endl;
			}
		}
	}
	print_state();
}

void Game::print_state() {
/*
	if (player.is_alive())
	{
		cout << endl << "Player health is: " << player->current_health << endl;
	}
	else
	{
		cout << endl << "Player died" << endl;
	}
	if (mob->is_alive())
	{
		cout << "Mob health is: " << mob->current_health << endl << endl;
	}
	else
	{
		cout << "Mob is dead" << endl << endl;
	}*/
}; 