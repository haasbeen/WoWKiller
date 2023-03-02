#include "Battle.h"

Battle::Battle(Player& player, Mob& mob) {
	this->player = &player;
	this->mob = &mob;

};

void Battle::start() {


	while (player->is_alive() && mob->is_alive())
	{
		print_state();
		string player_input;
		bool invalid_input = true;
		while (invalid_input)
		{
			cout << "Do you want to attack or run?" << endl;
			cout << "Choose to fight or run: ";
			cin >> player_input;

			if (player_input == "fight" || player_input == "run")
			{
				invalid_input = false;
			}
			else {
				cout << "Wrong input" << endl;
			}
		}
		if (player_input == "fight")
		{
			player->attack(*mob);
			mob->attack(*player);
		}
		else if (player_input == "run")
		{
			break;
		}
	}
	print_state();
}

void Battle::print_state() {

	if (player->is_alive())
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
	}
};