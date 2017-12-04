/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 20:13:35 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/02 21:59:39 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c ,1);
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
	ft_putchar('\n');
}

int			is_there(char c, char *uni)
{
	int i;
	
	i = 0;
	while (uni[i])
	{
		if (uni[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void		ft_union(char *s1, char *s2)
{
	int i;
	int j;
	int z;
	char u[1000];

	i = 0;
	j = 0;
	z = 0;
	while (s1[i])
	{
		if (!is_there(s1[i], u))
		{
			u[z] = s1[i];
			z++;
		}
		i++;
	}
	while (s2[j])
	{
		if (!is_there(s2[j], u))
		{
			u[z] = s2[j];
			z++;
		}
		j++;
	}
	u[z] = '\0';
	ft_putstr(u);
}

int			main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		ft_union(argv[1], argv[2]);
	return (0);
}
