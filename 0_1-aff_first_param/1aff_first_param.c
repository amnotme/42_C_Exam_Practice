/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 14:02:38 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/03 14:05:21 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("\n");
	else
	{
		ft_putstr(argv[1]);
		ft_putstr("\n");
	}
	return (0);
}
