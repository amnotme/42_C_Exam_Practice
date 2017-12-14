/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 23:37:39 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/12 00:09:16 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			get_length(int s, int e)
{
	int l;

	l = 0;
	if (s == e)
		l = 1;
	else if (s < e)
		while (s + l <= e)
			l++;
	else if (s > e)
		while (s >= e + l)
			l++;
	return (l);
}

int			*ft_range(int start, int end)
{
	int *tab;
	int l;
	int i;
	
	i = 0;	
	l = get_length(start, end);
	if (!(tab = (int *)malloc(sizeof(int) * l)))
		return (NULL);
	if (start == end)
		tab[i] = start;
	else if (start > end)
		while (start >= end)
			tab[i++] = start--;
	else if (start < end)
		while (start <= end)
			tab[i++] = start++;
	return (tab);
}

