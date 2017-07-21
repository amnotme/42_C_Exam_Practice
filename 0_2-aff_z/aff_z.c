/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 16:53:16 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/20 17:00:36 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
		return (-1);
	}
	while (argv[1] != '\0')
	{
		if (argv[1][i] == 'z')
		{
			ft_putchar('z');
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('z');
	ft_putchar('\n');
	return (0);
}
