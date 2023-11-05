#include <string>

unsigned hamming(const std::string& a, const std::string& b)
{
	int k;
	k = 0;
	if (a.size() == b.size()){
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i]!=b[i])
			{
				k++;
			}
		}
	}
	return k;

    return 0;
}
