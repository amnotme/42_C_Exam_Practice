#include <unistd.h>
#include <stdio.h>

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int 		bra_mult(char c)
{
	if (c == '(')
		return (2);
	else if (c == ')')
		return (-2);
	else if (c == '{')
		return (3);
	else if (c == '}')
		return (-3);
	else if (c == '[')
		return (4);
	else if (c == ']')
		return (-4);
	else
		return (0);
}

void		brackets(char *arg)
{
	int i;
	float total;

	total = 1.0;
	i = 0;
	while (arg[i])
	{
		if (bra_mult(arg[i]) > 0)
			total = (total * 10) + bra_mult(arg[i]);
		else if (bra_mult(arg[i]) < 0)
			total = ((total + bra_mult(arg[i])) / 10);
		if (total < 0)
			break;
		i++;
	}
	printf("total -> %f\n", total);
	if (total == 1)
		ft_putstr("OK\n");
	else
		ft_putstr("Error\n");
}


int			main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_putstr("\n");
	else
	{
		while (i < argc)
		{
			brackets(argv[i]);
			i++;
		}
	}
	return (0);
}
