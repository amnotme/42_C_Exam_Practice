int			is_power_of_2(unsigned int n)
{
	unsigned int i;

	i = 1;
	if (n == 0)
		return (0);
	while (i * i <= n)
	{
		if (n == (i * i))
			return (1);
		i++;
	}
	return (0);
}
