/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 12:24:21 by exam              #+#    #+#             */
/*   Updated: 2018/01/16 12:37:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			is_bracket(char c)
{
	if (c == '(')
		return (2);
	else if (c == ')')
		return (-2);
	else if (c == '[')
		return (3);
	else if (c == ']')
		return (-3);
	else if (c == '{')
		return (4);
	else if (c == '}')
		return (-4);
	else 
		return (0);
}

void		brackets(char *arg)
{
	int i;
	float res;

	i = 0;
	res = 1.0;
	while (arg[i])
	{
		if (is_bracket(arg[i]) > 0)
			res = ((res * 10) + is_bracket(arg[i]));
		else if (is_bracket(arg[i]) < 0)
			res = (res + is_bracket(arg[i])) / 10;

		if (res < 0)
			break ;
		i++;
	}
	if (res == 1.0)
		ft_putstr("OK\n");
	else
		ft_putstr("Error\n");
}

int			main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_putstr("\n");
	else
		while (i < argc)
		{
			brackets(argv[i]);
			i++;
		}
	return (0);
}
