/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 10:28:55 by exam              #+#    #+#             */
/*   Updated: 2018/01/16 11:51:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void			ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				is_valid(char *str)
{
	int i;
	int c;

	c = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == 'K')
			c++;
		else if (str[i] == 'P')
			c++;
		else if (str[i] == 'B')
			c++;
		else if (str[i] == 'R')
			c++;
		else if (str[i] == 'Q')
			c++;
		i++;	
	}
	return (c);
}
char			**create_board(int l)
{
	char **board;
	int i; 

	i = 0;
	board = (char **)malloc(sizeof(char *) * (l+ 1));

	while (i < l)
	{
		board[i] = (char *)malloc(sizeof(char ) * (l + 1));
		i++;
	}
	return (board);
}
int				check_pawn(char **board, int l)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (board[y])
	{
		x = 0;
		while (board[y][x])
		{
			if (board[y][x] == 'P')
			{
				if ((board[y - 1][x - 1] == 'K') && ((y - 1 >= 0) && (x - 1 >= 0)))
					return (1);
				else if ((board[y - 1][x + 1] == 'K') && ((y - 1 >= 0) && (x + 1 < l)))
					return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}
int				main(int argc, char **argv)
{
	int	i;
	int j;
	int	l;
	int tl;
	int x;
	int y;
	int chars;

	i = 1;
	j = 0;
	x = 0;
	y = 0;
	chars = 0;
	char **board;

	if (argc < 2)
		ft_putstr("\n");
	else
	{
		l = ft_strlen(argv[1]);
		tl = l * l;
		while (i < argc)
		{
			chars = chars + ft_strlen(argv[i]);
			i++;
		}
		if (chars == tl)
		{
			ft_putstr("success\n");
			board = create_board(l);
			i = 1;
			while (i < argc)
			{
				j = 0;
				y = 0;
				while (j < l)
				{
					board[x][y] = argv[i][j];
					j++;
					y++;
				}
				i++;
				board[x][y] = '\n';
				x++;
			}
			board[x] = (void *)0;
			i = 0;
			while (board[i])
			{
				printf("%s", board[i]);
				i++;
			}
			if (check_pawn(board, l))
				ft_putstr("success\n");
		}
		else
			ft_putstr("Fail\n");
		printf("tl -> %d l -> %d chars -> %d\n", tl, l, chars);
	}
	return (0);
}

unfinished implementation;
*/
