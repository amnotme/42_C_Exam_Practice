/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 22:13:28 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/27 22:30:15 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 ** This function will iterate down to give me the number of times it
 ** needs to be repeated.
 */

int			count_down(char c)
{
	int	i;

	i = 1;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{	
		while ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
		{	
			i++;
			c--;
		}
	}
	return (i);
}

void		repeat_alpha(char *arg)
{
	int i;
	int c;

	i = 0;
	while (arg[i])
	{
		c = count_down(arg[i]);
		while (c > 0)
		{
			ft_putchar(arg[i]);
			c--;
		}
		i++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		repeat_alpha(argv[1]);
	return (0);
}
