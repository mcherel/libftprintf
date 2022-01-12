/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 23:22:05 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/10 16:11:59 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libftprintf.h"

void *ft_converts(const char *str)
{
    int i;
    int j;
    

    i = 0;
    j = 0;
    while (str[i+j] != '\0')
    {
        while ((str[i+j] != '%') || (str[i+j] != '\0'))
        {
            uType.str[j] = str[i+j];
            j++;
        }
        if(str[i + j] == '%' && j > 0)
        {
            i=j;
            j=0;
            ft_putstr(uType.str);
        }
        else if (str[i] == '%' && j == 0)
            ft_putstr("%");
    }

}*/
