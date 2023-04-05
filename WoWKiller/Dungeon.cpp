#include "Dungeon.h"

Dungeon::Dungeon() {


};

void Dungeon::generate() {
	player_x = 0;
	player_y = 0;

	for (int row_index = 0; row_index < 10; row_index++) {
		vector<Square> row;
		for (int column_index = 0; column_index < 10; column_index++) {
			Square square;
			if (row_index == 0) {
				square.up = false;
			}
			if (column_index == 0) {
				square.left = false;
			}
			if (row_index == 9) {
				square.down = false;
			}
			if (column_index == 9) {
				square.right = false;
			}
			
			row.push_back(square);
		}
		map.push_back(row);
	}
};

Square Dungeon::player_location() {
	return map[player_x][player_y];
}

