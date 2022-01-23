/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argxXp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:25:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/23 23:18:06 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int ft_argxXp(char c, va_list args, uType u)
{
    int p;

    p = 0;
    if (c == 'p')
    {
        u.p = (void *) va_arg(args, void *);
        ft_putstr("0x");
        p = 2;
    }
    else if ((c == 'x') || (c == 'X'))
        u.x = (size_t) va_arg(args, size_t);
    if ((c == 'x') || (c == 'p'))
        u.s = ft_xtoa((size_t)u.p, 'x');
    else if (c == 'X')
        u.s = ft_xtoa(u.x, 'X');
    ft_putstr(u.s);
    p = p + (int)ft_strlen(u.s);
    //ft_printf("hhhhhhhhhhhhhhhhh%d",ft_strlen(u.s) + p);
    free(u.s);
    u.s = NULL;
    return (p);    
}