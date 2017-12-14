/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 08:41:31 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/21 09:22:04 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		first_word(char *str)
{
	char	*ptr;
	int		i;
	int		c;

	c = 0;
	i = 0;
	ptr = str;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
			i++;
		else if ((str[i] != ' ') || (str[i] != '\t') || (str[i] == '\n'))
		{
			str[c] = str[i];
			c++;
			i++;
			if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
			{
				str[c] = '\0';
				str = ptr;
				ft_putstr(str);
				ft_putchar('\n');
				return ;
			}
		}
	}
	ft_putchar('\n');
	return ;
}
int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	first_word(argv[1]);
	return (0);
}
