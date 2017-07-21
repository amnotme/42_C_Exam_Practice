/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 18:35:31 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/20 22:31:26 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			alpha_number(char c)
{
	int		i;
	char	a;
	char	A;

	a = 'a';
	A = 'A';
	i = 1;
	while (((a >= 'a') && (a <= 'z')) || ((A >= 'A') && (A <= 'Z')) || (i < 27))
	{
		if ((a == c) || (A == c))
			return (i);
		a++;
		A++;
		i++;
	}
	return (1);
}

int			main(int argc, char **argv)
{
	int i;
	int	c;

	i = 0;
	c = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			c = alpha_number(argv[1][i]);
			while (c > 0)
			{
				ft_putchar(argv[1][i]);
				c--;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
