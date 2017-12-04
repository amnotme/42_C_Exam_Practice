/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 22:34:32 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/02 22:39:09 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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

int			wsapce(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void		rev_wstr(char *arg)
{
	int i; 
	int j;

	i = 0;
	j = 0;
	while (arg[i])
	{
		TODO
	}
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		rev_wstr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
