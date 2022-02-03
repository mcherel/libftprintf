/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:29:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/02/03 12:29:15 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>

int     ft_printf(const char *str, ...)
{
    int count;

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
        }       
        else
        {
            str++;
            count = (count + ft_switch(*str, args));
        }
        str++;
    }
    va_end(args);

    return (count);
}