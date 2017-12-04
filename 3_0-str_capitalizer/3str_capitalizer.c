/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 00:19:11 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/02 01:05:22 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int			is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int			wspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void		str_capitalizer(char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if (is_lower(arg[i]) && i == 0)
			ft_putchar(arg[i] - 32);
		else if (is_upper(arg[i]) && i == 0)
			ft_putchar(arg[i]);
		else if (wspace(arg[i - 1]) && is_lower(arg[i]))
			ft_putchar(arg[i] - 32);
		else if (!wspace(arg[i - 1]) && is_upper(arg[i]))
			ft_putchar(arg[i] + 32);
		else
			ft_putchar(arg[i]);
		i++;
	}
	ft_putchar('\n');
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
			i++;
		}
	}
	return (0);
}
