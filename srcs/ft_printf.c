/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:29:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/11 17:24:57 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_printf(const char *str, ...)
{
    size_t written;

    written = 0;
    if (!str)
        return (written);
    va_list args;
    int d;
    char *s;
    char    c;
    va_start(args, str);
    while(str[written] != '\0')
    {
        if (str[written] != '%')
            ft_putchar(str[written]);
        else
        {
            written++;
            //ft_print((char *)&str[written], args);
            //while (*str)
               switch (str[written]) {
               case 's': /* chaîne */
                   s = va_arg (args, char *);
                   ft_putstr(s);
                   break;
               case 'd':  /* entier */
                   d = va_arg (args, int);
                   s = ft_itoa(d);
                   ft_putstr(s);
                   free(s);
                   break;
               case 'c':   /* caractère */
                   c = va_arg (args, int);
                   ft_putchar(c);
                   break;
                case '%': /* % */
                    c = '%';
                    ft_putchar(c);
                   break;
               }
        }
        written++;
    }
    va_end(args);
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