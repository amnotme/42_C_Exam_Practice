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

void	three_spaces(void)
{
	ft_putstr("   ");
}

int		is_wspace(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	expand(char *arg)
{
	int i;
	int len;
	int actual_length;

	len = 0;
	i = 0;
	if ((len = ft_strlen(arg)) == 0)
		return ;
	while (is_wspace(arg[i]) == 1)
		i++;
	while (is_wspace(arg[len - 1]) == 1)
		len--;
	actual_length = len - i;
	while (j < actual_length)
	{
		
		if ((is_wspace(arg[i]) == 1) && (is_wspace(arg[i + 1]) == 0))
		{
			i++;
			j++;
			three_spaces();
		}
		else if (is_wspace(arg[i]) == 1)
		{
			i++;
			j++;
		}
		else
		{
			ft_putchar(arg[i]);
			j++;
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		expand(argv[1]);
		ft_putchar('\n');	
	}
}

