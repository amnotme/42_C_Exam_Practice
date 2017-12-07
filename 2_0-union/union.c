/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:23:40 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/03 22:46:15 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				is_there(char c, char *uni)
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

void			ft_union(char *arg1, char *arg2)
{
	int i;
	int j;
	char u[ft_strlen(arg1) + ft_strlen(arg2) + 1];

	i = 0;
	j = 0;
	u[j] = '\0';
	while (arg1[i])
	{
		if (!is_there(arg1[i], u))
		{
			u[j] = arg1[i];
			j++;
			u[j] = '\0';
		}
		i++;
	}

	i = 0;
	while (arg2[i])
	{
		if(!is_there(arg2[i], u))
		{
			u[j] = arg2[i];
			j++;
			u[j] = '\0';
		}
		i++;
	}
	ft_putstr(u);
	ft_putstr("\n");
}

int				main(int argc, char **argv)
{
	if (argc != 3)
		ft_putstr("\n");
	else
		ft_union(argv[1], argv[2]);
	return (0);
}
