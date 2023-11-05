#include <vector>

using namespace std;

int findSmallest(vector <int> a)
{
	int min;
	min = a[0];
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}return min;
	return 1;
}
