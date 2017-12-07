/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 02:15:48 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/30 02:30:24 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int			is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void		alpha_mirror(char c)
{
	char lower[27] = "abcdefghijklmnopqrstuvwxyz";
	char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a;
	char A;
	int i;

	a = 'a';
	A = 'A';
	i = 25;

	if (is_lower(c) || is_upper(c))
	{
		while (a != c && A != c)
		{
			a++;
			A++;
			i--;
		}
	}
	if (is_lower(c))
		ft_putchar(lower[i]);
	else if (is_upper(c))
		ft_putchar(upper[i]);
	else
		ft_putchar(c);
}

void		mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		alpha_mirror(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		mirror(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
