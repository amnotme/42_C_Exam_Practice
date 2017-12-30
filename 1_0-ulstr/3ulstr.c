#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int				is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}


void			ulstr(char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if (is_lower(arg[i]))
			ft_putchar(arg[i] - 32);
		else if (is_upper(arg[i]))
			ft_putchar(arg[i] + 32);
		else
			ft_putchar(arg[i]);
		i++;
	}
	ft_putchar('\n');
}

int				main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		ulstr(argv[1]);
	return (0);
}
