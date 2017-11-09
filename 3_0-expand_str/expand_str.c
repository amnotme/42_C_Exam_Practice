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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void 	three_spaces(void)
{
	ft_putstr("   ");
}

int		is_wspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f')
		return (1);
	else
		return (0);
}

void	expand_str(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (str[i] != '\0' && (is_wspace(str[i]) == 1))
		i++;
	if (str[i] == '\0')
		return ;
	len = ft_strlen(str);
	while (is_wspace(str[len]) == 1)
		len--;
	len = len - i;
	while (str[i] != '\0' && len > 0)
	{
		while (is_wspace(str[i]) == 0 && str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
			len--;
		}
		while (is_wspace(str[i]) == 1)
		{
			i++;
			len--;
		}
		if (len > 0)
			three_spaces();

	}
}


int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		expand_str(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
