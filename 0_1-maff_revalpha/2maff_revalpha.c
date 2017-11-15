/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 00:42:42 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/14 00:49:48 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char c;
	int i;

	i = 0;
	c = 'z';
	while (i < 26)
	{
		if (i % 2 == 0)
			ft_putchar(c);
		else
			ft_putchar(c - 32);
		i++;
		c--;
	}
	ft_putchar('\n');
	return (0);
}
