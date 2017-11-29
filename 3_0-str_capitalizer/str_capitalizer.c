/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 23:08:49 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/28 00:05:59 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_wspace(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	return (0);
}

int			alpha(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int 		capital(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void		str_capitalizer(char *arg)
{
	int i;

	i = 0;
	if (!(arg[i]))
		return ;
	while (is_wspace(arg[i]))
	{
		ft_putchar(arg[i]);
		i++;
	}
	while (arg[i])
	{
		if (is_wspace(arg[i - 1]) && alpha(arg[i]) && !capital(arg[i]))
			ft_putchar(arg[i] - 32);
		else if (is_wspace(arg[i - 1]) && !alpha(arg[i]) && capital(arg[i]))
			ft_putchar(arg[i]);
		else if (!is_wspace(arg[i]) && !alpha(arg[i]) && capital(arg[i]))
			ft_putchar(arg[i] + 32);
		else
			ft_putchar(arg[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_putchar('\n');
	else
	{
		while (argv[i])
		{
			str_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
