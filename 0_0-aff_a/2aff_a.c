/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2aff_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 07:26:36 by lhernand          #+#    #+#             */
/*   Updated: 2017/09/19 07:36:40 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_there_an_a(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'a')
			return (1);
		i++;
	}
	return (-1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	if (is_there_an_a(argv) == 1)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putchar('\n');
		return (0);
	}
	return (0);
}

