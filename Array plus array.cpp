#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
	int sum;
	int sum2;
	int sum3;
	sum3 = 0;
	sum = 0;
	sum2 = 0;
	for (int i = 0; i < a.size(); i++)
	{
		sum = sum + a[i];
	}
	for (int j = 0; j < b.size(); j++)
	{
		sum2 = sum2 + b[j];
	}
	sum3 = sum + sum2;
	return sum3;
}
