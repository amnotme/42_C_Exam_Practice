/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:55:54 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/07 15:18:15 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int		wdmatch(char *arg1, char *arg2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (arg1[i] != '\0' && arg2[j] != '\0')
	{
		if (arg1[i] == arg2[j])
			i++;
		if (arg1[i] == '\0')
			return (1);
		j++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		if (wdmatch(argv[1], argv[2]) == 1)
			ft_putstr(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
