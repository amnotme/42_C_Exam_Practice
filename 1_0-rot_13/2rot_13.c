/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 18:59:14 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/02 19:06:39 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		rot_13(char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] >= 'a' && arg[i] <= 'z')
			ft_putchar((((arg[i] - 'a') + 13 ) % 26 ) + 'a');
		else if (arg[i] >= 'A' && arg[i] <= 'Z')
			ft_putchar((((arg[i] - 'A') + 13 ) % 26 ) + 'A');
		else
			ft_putchar(arg[i]);
		i++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		rot_13(argv[1]);
	return (0);
}

