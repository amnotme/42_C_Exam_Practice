#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] == 'a')
		{
			ft_putchar('a');
			return ;
		}
		else
			i++;
	}
}


int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('a');
	else
		aff_a(argv[1]);
	ft_putchar('\n');
	return (0);
}
