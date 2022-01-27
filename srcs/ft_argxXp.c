/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argxXp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:25:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/27 16:05:47 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
//#include <stdio.h>

int ft_argxXp(char c, va_list args, uType u)
{
    int len;

    len = 0;
    if (c == 'p')
    {
        u.p = (void *) va_arg(args, void *);
        if(u.p == 0)
        {
            ft_putstr(PTR_NULL);
            return  (ft_strlen(PTR_NULL));
        }
        ft_putstr("0x");
        len = 2;

    }
    else if ((c == 'x') || (c == 'X'))
        u.x = (size_t) va_arg(args, size_t);
    if ((c == 'x') || (c == 'p'))
        u.s = ft_xtoa((size_t)u.p, 'x');
    else if (c == 'X')
        u.s = ft_xtoa(u.x, 'X');
    //printf("SSTTTTTRRRRRRR %s\n", u.s);
    ft_putstr(u.s);
    len = len + (int)ft_strlen(u.s);
    //ft_printf("hhhhhhhhhhhhhhhhh%d",ft_strlen(u.s) + len);
    free(u.s);
    u.s = NULL;
    return (len);    
}