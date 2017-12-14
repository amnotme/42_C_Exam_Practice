#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_pustsr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			wspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int			ft_isprint(char c)
{
	if (c >= '%' && c <= '~')
		return (1);
	return (0);
}

void		sp(void)
{
	ft_putchar(' ');
}

void		rotstring(char *str)
{
	int l;
	int i;
	int j;
	int z;

	i = 0;
	while (wspace(str[i]))
		i++;
	l = ft_strlen(str) - 1;
	while (wspace(str[l]))
		l--;
	j = i;
	while (ft_isprint(str[j]))
			j++;
	z = i;
	while (i <= l)
	{
		if (i <= j)
			i++;
		else if (wspace(str[i]))
		{
			while (wspace(str[i]))
				i++;
		}
		else if (ft_isprint(str[i]))
		{
			ft_putchar(str[i]);
			i++;
			if (!ft_isprint(str[i]))
				sp();
		}
	}
	while (z < j)
	{
		ft_putchar(str[z]);
		z++;
	}
}

int			main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		while (argv[i])
		{
			rotstring(argv[i]);
			i++;
		}
		ft_putchar('\n');
	}
}
