/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:29:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/17 21:32:56 by mcherel-         ###   ########.fr       */
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
    va_list         args;
    int             d;
    int             x;
    unsigned int    u;
    char            *s;
    char            c;
    void            *p;
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
                   s = (char *)va_arg(args, char *);
                   ft_putstr(s);
                   break;
               case 'd':  /* entier */
                   d = va_arg (args, int);
                   s = ft_itoa(d);
                   ft_putstr(s);
                   free(s);
                   s = NULL;
                   break;
               case 'c':   /* caractère */
                   c = (int)va_arg(args, int);
                   ft_putchar(c);
                   break;
                case 'u':   /* unsigned int */
                   u = (unsigned int) va_arg(args, unsigned int);
                   s = ft_utoa(u);
                   ft_putstr(s);
                   free(s);
                   break;
                case 'x':   /* hexa */
                   x = (size_t) va_arg(args, size_t);
                   s = ft_xtoa(x, 'x');
                   ft_putstr(s);
                   free(s);
                   break;
                case 'X':   /* hexa */
                   x = (size_t) va_arg(args, size_t);
                   s = ft_xtoa(x, 'X');
                   ft_putstr(s);
                   free(s);
                   break;
                case 'p':   /* pointeur */
                   p = (void *) va_arg(args, void *);
                   ft_putstr("0x");
                   s = ft_xtoa((size_t)p, 'x');
                   ft_putstr(s);
                   free(s);
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