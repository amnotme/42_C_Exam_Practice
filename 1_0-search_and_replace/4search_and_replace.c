/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:15:26 by exam              #+#    #+#             */
/*   Updated: 2018/01/16 09:29:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int	 i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
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

int			is_valid(char *str)
{
	return ((ft_strlen(str) == 1) ? 1 : 0);
}

int			is_there(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void		search_and_replace(char *a1, char *a2, char *a3)
{
	int i;

	i = 0;
	if ((!is_valid(a2)) || (!is_valid(a3)))
		ft_putstr("\n");
	else
	{
		if (!is_there(a1, a2[0]))
		{
			ft_putstr(a1);
			ft_putstr("\n");
		}
		else
		{
			while (a1[i])
			{
				if (a1[i] == a2[0])
					a1[i] = a3[0];
				i++;
			}
			ft_putstr(a1);
			ft_putstr("\n");
		}
	}
}


int			main(int argc, char **argv)
{
	if (argc != 4)
		ft_putstr("\n");
	else
		search_and_replace(argv[1], argv[2], argv[3]);
	return (0);
}
