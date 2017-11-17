#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		print_bits(unsigned char octet)
{
	char oct[9];
	int max;
	int number;
	int i;
	int remainder;

	remainder = 0;
	i = 0;
	max = 128;
	number = octet;
	while (max > 0 || i < 8)
	{
		oct[i] = (number / max) + 48;
		number = (number % max);
		max = max / 2;
		i++;
	}
	oct[i] = '\0';
	ft_putstr(oct);
}
