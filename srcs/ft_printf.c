/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:29:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/23 23:57:04 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_printf(const char *str, ...)
{
    int written;
    int count;

    written = 0;
    count = 0;
    if (!str)
        return (written);
    va_list         args;

    va_start(args, str);
    while(str[written] != '\0')
    {
        if (str[written] != '%')
        {
            ft_putchar(str[written]);
            //written++;

        }
        else
        {
            count++;
            written++;
            count = count + 1 - ft_switch(str[written], args);
            //written++;
            //written = written + ft_switch(str[written+1], args);
        }
        written++;
    }
    va_end(args);
    written = written - count;
    //printf("WRITTEN %d \n", written - count);
    return (written);
}

/*void ft_print(char *str, ...)
{
    va_list args;
    if (*str == '%')
        ft_putchar('%');
    else if (*str == 'c')
    {
        char c = (int)va_arg(args, int);
        ft_putchar(c);
    }
    else
        ft_putstr("_le type n'est pas supporté_");
}*/