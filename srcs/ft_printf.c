/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:29:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/23 18:11:31 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_printf(const char *str, ...)
{
    size_t written;
    size_t count;

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
            ft_switch(str[written], args);
        }
        written++;
    }
    va_end(args);
    //printf("WRITTEN %zu \n", written);
    return (written-count);
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