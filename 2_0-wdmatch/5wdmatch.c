#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


void	wdmatch(char *arg1, char *arg2)
{
	int i;
	int j;
	int c;

	c = 0;
	i = 0;
	j = 0;
	while (arg2[j])
	{
		if (arg1[i] == arg2[j])
		{
			c++;
			i++;
		}
		j++;
	}
	if (ft_strlen(arg1) == c)
		ft_putstr(arg1);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		wdmatch(argv[1], argv[2]);
	return (0);
}
