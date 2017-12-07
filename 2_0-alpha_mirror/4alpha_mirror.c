/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 15:00:57 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/03 15:26:38 by lhernand         ###   ########.fr       */
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

void		mirror(char c)
{
	char low[27] = "abcdefghijklmnopqrstuvwxyz";
	char up[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a;
	char A;
	int i;

	a = 'a';
	A = 'A';
	i = 25;
	if (is_upper(c) || is_lower(c))
	{
		while (a != c && A != c)
		{
			a++;
			A++;
			i--;
		}
	}
	if (is_lower(c))
		ft_putchar(low[i]);
	else if (is_upper(c))
		ft_putchar(up[i]);
	else
		ft_putchar(c);
}

void		alpha_mirror(char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		mirror(arg[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		alpha_mirror(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
