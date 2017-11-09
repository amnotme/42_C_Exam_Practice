/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 21:06:14 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 01:19:08 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		is_prime(int nb)
{
	int i = 2;
	if (nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}


int		main(int argc, char **argv)
{
	int nb;
	int is_p;
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	nb = atoi(argv[1]);
	if (nb == 1)
	{
		printf("1\n");
		return (0);
	}
	is_p = is_prime(nb);
	if (is_p == 1)
	{
		printf("%d\n", nb);
		return (0);
	}
	int j;
	j = 2;
	if (is_p == 0)
	{
		while (j <= nb)
		{
			if ((is_prime(j) == 1) && (nb % j == 0))
			{
				if (nb == j)
					printf("%d",j);
				else
					printf("%d*",j);
				nb = nb/j;
			}
			else
			{
				j++;
			}
		}
	}
	printf("\n");
	return (0);
}
