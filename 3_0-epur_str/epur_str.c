/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 22:02:15 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/02 22:31:52 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			wspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void		epur_str(char *arg)
{
	int i;
	int l;

	i = 0;
	l = ft_strlen(arg) - 1;
	while (wspace(arg[i]))
		i++;
	while (wspace(arg[l]))
		l--;
	while (i <= l)
	{
		if (wspace(arg[i]) && !wspace(arg[i + 1]))
			ft_putchar(' ');
		if (!wspace(arg[i]))
			ft_putchar(arg[i]);
		i++;	
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		epur_str(argv[1]);
	return (0);
}
