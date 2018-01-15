/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:21:00 by lhernand          #+#    #+#             */
/*   Updated: 2018/01/12 17:20:03 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/*
int		is_power_of_2(unsigned int n)
{
	return (n > 0 && !(n & (n - 1)));
}
*/
int		is_power_of_2(unsigned int n)
{
	unsigned int num;
	unsigned int i;

	i = 1;
	num = 2;
	if (n <= 0)
		return (0);
	else if (n == 1)
		return (1);
	else
	{
		while (num <= n && i <= 32 )
		{
			if (n == num)
				return (1);
			num = num * 2;
			i++;
		}
	}

	printf("%d -> \n", num);
	return (0);
}
/*
int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		printf("test: %d",is_power_of_2(atoi(argv[1])));
	return (0);
}
*/
/*
int main(void)
{
	unsigned int test;

	test = 4294967296;
	is_power_of_2(test);
	return (0);
}

