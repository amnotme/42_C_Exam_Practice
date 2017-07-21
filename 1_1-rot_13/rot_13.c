/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 00:56:04 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/21 02:02:46 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		rot_13(char *str)
{
	char	*ptr;
	int		c;
	int		i;

	ptr = str;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			c  = (str[i] - 'a') % 13;
			if (c > 0)
				str[i] = str[i] + 1;
			else
				str[i] =  str[i] - 13;
		}
		i++;
	}
	str[i] = '\0';
	str = ptr;
	ft_putstr(str);
	ft_putchar('\n');
	return ;
}

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	rot_13(argv[1]);
	return (0);
}
