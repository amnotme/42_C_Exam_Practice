/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:41:51 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/20 14:52:20 by lhernand         ###   ########.fr       */
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
	return (0);
}

int		main(int argc, char **argv)
{
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
		return (1);
	}
	else
	{
		ft_putchar('\n');
		return (0);
	}
	return (0);
}
