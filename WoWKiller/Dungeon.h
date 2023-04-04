#pragma once
#include <vector>
#include "Square.h"

using namespace std;

class Dungeon {

public:

	Dungeon();

	vector<vector<Square>> map;

	void generate();


};
