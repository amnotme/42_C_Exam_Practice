/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:19:44 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/07 15:32:32 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_digit(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= '9' && s[i] >= '0')
			i++;
		else
			return (0);
	}
	return (1);
}

int		common_denom(int left, int right)
{
	int i;
	int cd;

	cd = 0;
	i = 1;
	while (i <= left && i <= right)
	{
		if (left % i == 0 && right % i == 0)
			cd = i;
		i++;
	}
	return (cd);
}

void	pgcd(char *arg1, char *arg2)
{
	int left;
	int right;

	if (is_digit(arg1) == 1 && (is_digit(arg2) == 1))
	{
		left = atoi(arg1);
		right = atoi(arg2);
		printf("%d\n", common_denom(left, right));
	}
	else
		printf("\n");
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		printf("\n");
	else
		pgcd(argv[1], argv[2]);
	return (0);
}
