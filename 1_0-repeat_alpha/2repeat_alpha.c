#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		char_count(char c)
{
	char A;
	char a;
	int i;

	i = 0;
	a = 'a';
	A = 'A';
	ft_putchar(c);
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		while ((a != c && A != c) && i < 27)
		{
			a++;
			A++;
			i++;
		}
		return (i);
	}
	return (i);
}

void	repeat_alpha(char *arg)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (arg[i] != '\0')
	{
		count = char_count(arg[i]);
		while (count > 0)
		{
			ft_putchar(arg[i]);
			count--;
		}
		i++;
	}
	return ;
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		repeat_alpha(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
