#include <ctime>
#include <stdlib.h>

using namespace std;

namespace util {
	void init_rng() {
		time_t result = time(nullptr);
		srand(result);
	}
	bool rng(int percent) {
		
		int zero_100 = rand() % 101;
		return percent >= zero_100;
	}
}