#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] <= 'z' && arg[i] >= 'a')
			ft_putchar(arg[i] - 32);
		else if (arg[i] <= 'Z' && arg[i] >= 'A')
			ft_putchar(arg[i] + 32);
		else
			ft_putchar(arg[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		ulstr(argv[1]);
	return (0);
}
