#pragma once
#include <vector>
#include "Square.h"

using namespace std;

class Dungeon {

public:

	vector<vector<Square>> map;
	int player_x;
	int player_y;

	Dungeon();

	void generate();

	Square player_location();

};
