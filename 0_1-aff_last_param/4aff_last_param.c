/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:55:46 by lhernand          #+#    #+#             */
/*   Updated: 2017/12/02 00:00:01 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		last_param(char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		write(1, &arg[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
		last_param(argv[argc - 1]);
	return (0);
}
