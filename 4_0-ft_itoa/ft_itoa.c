/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 03:09:13 by lhernand          #+#    #+#             */
/*   Updated: 2018/01/08 03:21:10 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t		ft_numlength(int num, int base)
{
	size_t	l;

	l = 0;
	if (num == 0)
		return (1);
	if (num < 0 && base == 10)
		l++;
	while (num)
	{
		num = num / base;
		l++;
	}
	return (l);
}

char 	*ft_itoa(int nbr)
{
	size_t i;
	size_t n_s;
	char *str;

	i = 0;
	if (nbr == -2147483648)
		return ("-2147483648");
	n_s = ft_numlength(nbr, 10);
	if (!(str = (char *)malloc(sizeof(char) * (n_s + 1))))
		return (NULL);
	str[n_s] = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
		i++;
	}
	while (i < n_s--)
	{
		str[n_s] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
