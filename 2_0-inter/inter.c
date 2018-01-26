/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 09:19:43 by exam              #+#    #+#             */
/*   Updated: 2018/01/23 09:38:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i = 0;

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

int			is_there(char *str, char c)
{
	int i = 0;

	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char		*clean(char *str, int size)
{
	int i = 0;

	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

void		inter(char *a1, char *a2)
{
	int l = (ft_strlen(a1) + ft_strlen(a2) + 1);
	int i = 0;
	int j = 0;
	char u[l];

	clean(u, l);
	while (a1[i])
	{
		if (!(is_there(u, a1[i])) && (is_there(a2, a1[i])))
		{	
			u[j] = a1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (a2[i])
	{
		if (!(is_there(u, a2[i])) && (is_there(a1, a2[i])))
		{	
			u[j] = a2[i];
			j++;
		}
		i++;
	}
	ft_putstr(u);
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		inter(argv[1], argv[2]);
	return (0);
}
