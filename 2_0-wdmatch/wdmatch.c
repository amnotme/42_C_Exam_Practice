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

char	*wdmatch(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;

	ptr = s1;
	i = 0;
	j = 0;
	while ((s1[i] != '\0') && (s2[j] != '\0'))
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
	{
		s1 = ptr;
		return (s1);
	}
	else
		return ('\0');
	
}

int 	main(int argc, char **argv)
{
	char *temp;	

	if (argc != 3)
	{
		ft_putchar('\n');
		return (-1);
	}
	else
	{
		temp = wdmatch(argv[1], argv[2]);
		if (temp != '\0')
		{
			ft_putstr(argv[1]);
			ft_putchar('\n');
			return (0);
		}
		else
			ft_putchar('\n');
	}
	return (-1);
}
