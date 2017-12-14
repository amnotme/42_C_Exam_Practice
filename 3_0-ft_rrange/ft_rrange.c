/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:36:42 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/11 22:58:02 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			get_length(int s, int e)
{
	int l;

	l = 0;
	if (s == e)
		l = 1;
	else if (s > e)
	{
		while (s >= e + l)
		l++;
	}
	else if (s < e)
	{
		while (s + l <= e)
		l++;
	}
	return (l);
}
int			*ft_rrange(int start, int end)
{
	int *tab;
	int i;
	int l;

	i = 0;
	l = get_length(start, end);
	if (!(tab = (int *)malloc(sizeof(int) * l)))
		return (NULL);
	if (start == end)
		tab[i] = start;
	else if (end < start)
	{
		while (end <= start)
		{
			tab[i] = end++;
			i++;
		}
	}
	else if (end > start)
	{
		while (end >= start)
		{
			tab[i] = end--;
			i++;
		}
	}
	return (tab);
}
