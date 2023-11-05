#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
	int j, sum;
	j = 0;
	sum = 0;
	if (input.size()==0)
	{
		return {};
	}
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] > 0)
		{
			j++;
		}
		else
		{
			sum = sum + input[i];
		}
	}
	return { j , sum };
}
