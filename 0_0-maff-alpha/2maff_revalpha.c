#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char c;
	int i;

	i = 0;
	c = 'z';
	while (c >= 'a')
	{
		if (i % 2 == 0)
			ft_putchar(c);
		else
			ft_putchar(c - 32);
		i++;
		c--;
	}
	ft_putchar('\n');
	return (0);
}
