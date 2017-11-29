#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int			is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void		mirror(char c)
{
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	char capital_alpha[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	char a;
	char A;

	a = 'a';
	A = 'A';
	i = 25;
	if (!is_lower(c) && !is_upper(c))
	{
		ft_putchar(c);
		return ;
	}
	while(a != c && A != c)
	{
		a++;
		A++;
		i--;
	}
	if (is_lower(c))
		ft_putchar(alpha[i]);
	else
		ft_putchar(capital_alpha[i]);
}

void		alpha_mirror(char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		mirror(arg[i]);
		i++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		alpha_mirror(argv[1]);
	return (0);
}
