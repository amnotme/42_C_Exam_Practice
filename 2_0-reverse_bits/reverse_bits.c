/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 01:25:30 by lhernand          #+#    #+#             */
/*   Updated: 2017/11/14 02:24:25 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** You can use printbits() to print the bits and ensure it is an accurate answer
*/

int             power(int n, int power)
{
    int number = n;
    
    if (power == 0)
        return (1);
    else if (power == 1)
        return (n);
    
    while (power > 1)
    {
        number *= n;
        power--;
    }
    return (number);
}

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char d = 0;
    int i = 0;
    
    while ( i < 4)
    {
        d = d | (((unsigned char)power(2, i) & octet) << (7 - 2 * i));
        i++;
    }
    while (i < 8)
    {
        d = d | (((unsigned char)power(2, i) & octet) >> (1 + (2 * (i - 4))))
        i++;
    }
    return (d);
}
