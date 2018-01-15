/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:05:03 by exam              #+#    #+#             */
/*   Updated: 2018/01/12 20:36:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int				is_digit(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int				ft_atoi(char *str)
{
	int i = 1;
	int num = 0;
	int temp = 0;
	int l = ft_strlen(str) - 1;
	if (str[0] == '-')
		num = 0;
	else
	{
		while (is_digit(str[l]) && (l >= 0))
		{
			temp = ((str[l] - '0') * (1 * i));
			l--;
			i *= 10;
			num += temp;
		}
	}
	return (num);
}

void			ft_putnbr(int num)
{
	int i; 
	int l;
	char number[15];

	l = num;
	i = 0;
	if (num == 2147483647)
		ft_putstr("2147483647");
	else if (num > 0)
	{
		while (l > 0)
		{
			l /= 10;
			i++;
		}
		number[i] = '\0';
		i--;
		while (i >= 0)
		{
			number[i] = (num % 10) + '0';
			num /= 10;	
			i--;
		}
		ft_putstr(number);
	}
	else
		ft_putchar('0');

}

int				is_prime(int num)
{
	int i;

	i = 2;
	if (num < 2)
		return (0);
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int				add_prime_sum(int num)
{
	int i; 
	int total;

	total = 0;
	i = 0;
	while (num > 1)
	{
		if (is_prime(num))
			total = total + num;
		num--;
	}
	return (total);
}

int				main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('0');
	else
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	ft_putchar('\n');
}
