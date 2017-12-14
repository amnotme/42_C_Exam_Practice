/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:29:22 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/11 23:04:22 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			get_length(int start, int end);
int			*ft_range(int start, int end);

int         main(int argc, char **argv)
{


	int *tab;
	int l;
	int i;
	i = 0;
	if (argc != 3)
		printf("not enough\n");
	else
	{
		l = get_length(atoi(argv[1]), atoi(argv[2]));
		tab = (int *)malloc(sizeof(int) * l);
		tab = ft_rrange(atoi(argv[1]), atoi(argv[2]));
		while (i < l)
		{
			printf("this is the tab -> %d\n", tab[i]);
			i++;
		}
	}
	return (0);
}
