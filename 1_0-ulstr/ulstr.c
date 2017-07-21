/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 00:33:12 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/21 00:47:54 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		reverse_case(char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = str;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
		i++;
	}
	str[i] = '\0';
	str = ptr;
	ft_putstr(str);
	ft_putchar('\n');
	return ;
}

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	reverse_case(argv[1]);
	return (0);
}
