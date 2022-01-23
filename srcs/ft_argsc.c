/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argsc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:41:39 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/23 23:12:44 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int ft_argsc(char c, va_list args, uType u)
{
    if (c == 's')
    {
        u.s = (char *)va_arg(args, char *);
        //printf("sssssssssssss: %i",ft_strlen(u.s));
        ft_putstr(u.s);
        //printf("sssssssssssss: %i",ft_strlen(u.s));
        return ((int)ft_strlen(u.s));
    }
    else if (c == 'c')
        u.c = (int)va_arg(args, int);
    else if (c == '%')
        u.c = '%';
    if ((c == 'c') || (c == '%'))
    {
        ft_putchar(u.c);
        return (1);
    }
    return (0);
}