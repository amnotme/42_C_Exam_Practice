/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 22:35:45 by lhernand          #+#    #+#             */
/*   Updated: 2017/07/21 00:29:35 by lhernand         ###   ########.fr       */
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

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void		search_and_replace(char *word, char *letter, char *replacing)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = word;
	if ((ft_strlen(letter) > 1) || (ft_strlen(replacing) > 1))
	{
		ft_putchar('\n');
		return ;
	}
	while (word[i] != '\0')
	{
		if (word[i] == letter[0])
			word[i] = *replacing;
		else
			word[i] = word[i];
		i++;
	}
	word[i] = '\0';
	word = ptr;
	ft_putstr(word);
	ft_putchar('\n');
	return ;
}
int			main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return (-1);
	}
	search_and_replace(argv[1], argv[2], argv[3]);
	return (0);
}
