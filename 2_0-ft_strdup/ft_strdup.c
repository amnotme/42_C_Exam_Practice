/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 11:51:03 by leopoldoh         #+#    #+#             */
/*   Updated: 2017/12/04 14:15:51 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int         ft_strlen(char *s1)
{
    int i;

    i = 0;
    while (s1[i])
        i++;
    return (i);
}

char        *ft_strdup(char *s1)
{
    int i;
    int len;
    char *s2;

    len = ft_strlen(s1);
    if (!(s2 = (char *)malloc(sizeof(char) * len + 1)))
        return (NULL);
    i = 0;
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}
