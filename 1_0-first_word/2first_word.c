/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 20:58:35 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/11 21:09:47 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int				wspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void			first_word(char *arg)
{
	int i;

	i = 0;
	while (wspace(arg[i]))
		i++;
	while (!wspace(arg[i]) && arg[i] != '\0')
	{
		write(1, &arg[i], 1);
		i++;
	}
}

int				main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		first_word(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
