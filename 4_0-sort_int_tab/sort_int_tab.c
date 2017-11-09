/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:40:06 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/07 16:31:11 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int flag;
	unsigned int i;
	int j;
	int temp;

	temp = 0;
	i = 0;
	flag = 0;

	while (flag == 0 )
	{
		flag = 1;
		while (i < size - 1)
		{
			j = i + 1;
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
				flag = 0;
				i = 0;
			}
			else
				i++;
		}
	}
}
