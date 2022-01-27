/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:29:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/27 12:58:07 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>
//#include <stdio.h>

int     ft_printf(const char *str, ...)
{
    //int written;
    int count;

    //written = 0;
    count = 0;
    if (!str)
        return (count);
    va_list         args;

    va_start(args, str);
    while(*str != '\0' && str)
    {
        if (*str != '%')
        {
            ft_putchar(*str);
            count++;
            str++;
        }       
        else
        {
            str++;
            //printf("COUNT BEFORE SWITCH: %d\n", count);
            count = (count + ft_switch(*str, args));
            //printf("COUNT AFTER SWITCH: %d\n", count);
            str++;
        }
    }
    va_end(args);
    //printf("COUNT PRINTF %d \n", count);

    return (count);
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