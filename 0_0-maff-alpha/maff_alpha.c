/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 15:16:06 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/20 15:40:59 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(void)
{
	char	a;
	int		i;

	i = 0;
	a = 'a';
	while (i < 26)
	{
		if (a % 2 == 0)
			ft_putchar(a - 32);
		else
			ft_putchar(a);
		i++;
		a++;
	}
	ft_putchar('\n');
	return (0);
}
