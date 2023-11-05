unsigned int hotpo(unsigned int n) {
    if (n == 0) return 0;
	int i;
	i = 0;
	if (n==1)
	{
		return 0;
	}

	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			i++;
		}
		else {
			n = (3 * n) + 1;
			i++;
		}
	}
	return i;
}
