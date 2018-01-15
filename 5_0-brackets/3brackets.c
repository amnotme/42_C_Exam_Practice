/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:00:44 by exam              #+#    #+#             */
/*   Updated: 2018/01/12 21:50:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int				is_bracket(char c)
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
/*
 * idea in the works for ((}{)) kind of parenthese
 *
int				counter_part(char c, char d)
{
	if (c == ')')
		if (d == '(')
			return (1);
	if (c == '}')
		if (d == '{')
			return (1);
	if (c == ']')
		if (d == '[')
		   return (1);
	return (0);	
}
*/
int				brackets(char *str)
{
	int i;
	float total;

	i = 0;
	total = 1.0;
	while (str[i])
	{
		if (is_bracket(str[i]) > 0)
			total = ((total * 10.0) + is_bracket(str[i]));
		else if (is_bracket(str[i]) < 0)
			total = (total + is_bracket(str[i])) / 10.0;
		
		if (total < 0.0)
			return (0);
		i++;
	}
	if (total == 1.0)
		return (1);
	return (0);
}

int 			main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		while (argv[i])
		{
			if (brackets(argv[i]))
				ft_putstr("OK\n");
			else
				ft_putstr("Error\n");
			i++;
		}
	}
	return (0);
}
