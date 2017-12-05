/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2rev_wstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 17:52:35 by leopoldoh         #+#    #+#             */
/*   Updated: 2017/12/05 01:21:58 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}


void        ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
int         ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int         wspace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

void        rev_wstr(char *arg)
{
    int l;
    int i;
    int j;

    i = 0;
    l = ft_strlen(arg) - 1;
    while (l >= 0)
    {
        if (!wspace(arg[l]))
            i++;
        if (wspace(arg[l]) || l == 0)
        {
            if (l == 0)
                j = l;
            else
            {
                l++;
                j = l;
            }
            while (i > 0)
            {   

                ft_putchar(arg[j]);
                i--;
                j++;
            }
            l--;
            if (l >= 0)
                ft_putchar(' ');
        }
        l--;
    }
}

int         main(int argc, char **argv)
{
    if (argc != 2)
        ft_putchar('\n');
    else
    {
        rev_wstr(argv[1]);
        ft_putchar('\n');
    }
    return (0);
}
