/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 23:29:59 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/30 02:12:10 by lhernand         ###   ########.fr       */
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
	while(str[i])
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

int			is_there(char *arg, char c)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void		search_and_replace(char *str, char *a, char *b)
{
	int i;

	i = 0;
	if (ft_strlen(a) > 1 || ft_strlen(b) > 1)
		return ;
	if (!is_there(str, a[0]))
	{
		ft_putstr(str);
		return ;
	}
	while (str[i])
	{
		if (str[i] == a[0])
			ft_putchar(b[0]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	if (argc != 4)
		ft_putchar('\n');
	else
	{
		search_and_replace(argv[1], argv[2], argv[3]);
		ft_putchar('\n');
	}
	return (0);
}
