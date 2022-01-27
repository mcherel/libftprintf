/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argsc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:41:39 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/27 15:32:14 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
//#include <stdio.h>

int ft_argsc(char c, va_list args, uType u)
{
    int len;

    len = 0;
    if (c == 's')
    {
        u.s = (char *)va_arg(args, char *);
        if (u.s == NULL)
        {
            ft_putstr("(null)");
            len = (6);
        }
        else
        {
            ft_putstr(u.s);
            len = (int)ft_strlen(u.s);
        }
    }
    else if (c == 'c')
        u.c = (int)va_arg(args, int);
    else if (c == '%')
        u.c = '%';
    if ((c == 'c') || (c == '%'))
    {
        ft_putchar(u.c);
        len = 1;
    }
    return (len);
}