/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 02:33:26 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/30 02:43:08 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


void		hidenp(char *arg1, char *arg2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (arg1[i] && arg2[j])
	{
		if (arg1[i] == arg2[j])
			i++;
		j++;
	}
	if (ft_strlen(arg1) == i)
		ft_putchar('1');
	else
		ft_putchar('0');
}

int			main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
	{
		hidenp(argv[1], argv[2]);
		ft_putchar('\n');
	}
	return (0);
}
