/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 22:34:35 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/27 22:58:50 by lhernand         ###   ########.fr       */
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

int			wdmatch(char *arg1, char *arg2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (arg1[i] != '\0' && arg2[j] != '\0')
	{
		if (arg1[i] == arg2[j])
			i++;
		j++;
	}
	if (i == (ft_strlen(arg1)))
		return (1);
	else
		return (0);
}


int			main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
	{
		if (wdmatch(argv[1], argv[2]) == 1)
		{
			ft_putstr(argv[1]);
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
	}
	return (0);
}
