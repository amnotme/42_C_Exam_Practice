#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_wspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		is_alpha(char c)
{
	if (is_lower(c) || is_upper(c))
		return (1);
	return (0);
}

void	str_capitalizer(char *arg)
{
	int i;

	i = 0;
	while (!is_alpha(arg[i]))
	{
		ft_putchar(arg[i]);
		i++;
	}
	while (arg[i])
	{
		if (i == 0 && is_upper(arg[i]))
			ft_putchar(arg[i]);
		else if (i == 0 && is_lower(arg[i]))
			ft_putchar(arg[i] - 32);
		else if (is_wspace(arg[i - 1]) && is_lower(arg[i]))
			ft_putchar(arg[i] - 32);
		else if (!is_wspace(arg[i - 1]) && is_upper(arg[i]))
			ft_putchar(arg[i] + 32);
		else
			ft_putchar(arg[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	
	i = 1;
	if (argc == 1)
		ft_putchar('\n');
	else
	{
		while (argv[i])
		{
			str_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
