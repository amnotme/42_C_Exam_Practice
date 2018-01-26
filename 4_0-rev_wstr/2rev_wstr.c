/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 10:15:39 by exam              #+#    #+#             */
/*   Updated: 2018/01/23 11:32:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int			ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int			ws(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

void		ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char		*clean(char *str, int size)
{
	int i = 0;
	
	while (i < size)
		str[i] = 0;
	return (str);
}

char		**create(int size, int w)
{
	char **var = NULL;
	int i = 0;

	var = (char **)malloc(sizeof(char *) * w + 1);
	while (i <= w)
	{
		var[i] = (char *)malloc(sizeof(char) * size + 1);
		i++;
	}
	return (var);
}

int			words(char *str)
{
	int i = 0;
	int w = 1;

	while (str[i])
	{
		if (ws(str[i]))
			w++;
		i++;
	}
	return (w);
}

void		rev_wstr(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int size = ft_strlen(str);
	int w = words(str);
	char **res = create(size, w);
	while (str[k])
	{
		if (!ws(str[k]) && (str[k]))
		{
			res[i][j] = str[k];
			k++;
			j++;
		}
		else
		{
			res[i][j] = '\0';
			j = 0;
			if (str[k] != '\0')
				k++;
			i++;
		}
	}
	res[i][j] = '\0';
	while (i > -1)
	{
		ft_putstr(res[i]);
		res[i] = NULL;
		free(res[i]);
		if (i != 0)
			ft_putstr(" ");
		i--;
	}
	ft_putstr("\n");
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr("\n");
	else
		rev_wstr(argv[1]);
	return (0);
}
