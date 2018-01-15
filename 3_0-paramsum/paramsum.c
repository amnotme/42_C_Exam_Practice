/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 02:25:47 by lhernand          #+#    #+#             */
/*   Updated: 2018/01/08 03:04:52 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int num)
{

	if (num >= 0 && num <= 2147483647)
	{
		if (num < 10)
		{
			ft_putchar(num + 48);
			return ;
		}
		ft_putnbr(num / 10);
		ft_putchar((num % 10) + 48);
	}
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		ft_putchar('0');
	else if (argv[1] != '\0')
		ft_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}
