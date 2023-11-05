#include <array>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
	int c, d;
	c = 1;
	d = 1;
	for (int i = 0; i < a.size(); i++)
	{
		c = c*a[i];
	}
	for (int j = 0; j < b.size(); j++)
	{
		d = d*b[j];
	}
	if (c > d || c==d)
	{
		return c - d;
	}
	else {
		return d - c;
	}
}
