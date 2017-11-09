/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:46:09 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/07 17:25:07 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}
int			is_bracket(char c)
{
	if (c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}')
		return (1);
	return (0);
}

char 		*no_brackets(char *arg)
{
	int i;
	int j;
	char *str;
	char *ptr;
	str = NULL;
	ptr = str;
	j = 0;
	i = 0;
	while (arg[i] != '\0')
	{
		if (is_bracket(arg[i]) == 1)
		{	
			str[j] = arg[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	str = ptr;
	return (str);
}

int			main(int argc, char **argv)
{	
	int i;

	i = 1;
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		/*
		while(argv[i] != '\0')
		{
			if (brackets(argv[i]) == 1)
				ft_putstr("OK\n");
			else
				ft_putstr("Error\n");
			i++;
		}*/
		while (argv[i] != '\0')
		{
			printf("%s\n", no_brackets(argv[i]));
			i++;
		}
	}
	return (0);
}
