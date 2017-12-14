/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 16:32:39 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/20 16:41:52 by lhernand         ###   ########.fr       */
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
	a = 'z';
	while (i < 26)
	{
		if (a % 2 == 1)
			ft_putchar(a - 32);
		else
			ft_putchar(a);
		a--;
		i++;
	}
	ft_putchar('\n');
	return (0);
}
