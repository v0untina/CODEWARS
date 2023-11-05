#include <vector>

int elevator_distance(std::vector<int> array) {
	int k = 0;
	for (int i = 0; i < array.size()-1; i++)
	{
		k += abs((array[i] - array[i + 1]));
	}
	return k;
}
