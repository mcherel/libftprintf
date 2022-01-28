/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argxXp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:25:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/28 14:57:12 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

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
            return  (int)(ft_strlen(PTR_NULL));
        }
        else if ((long)u.p == (long)LONG_MIN)
        {

            ft_putstr("0xffffffff80000000");
            return(18);
        }
        ft_putstr("0x");
        len = 2;
        u.x = (long long int)u.p;
    }
    else if ((c == 'x') || (c == 'X'))
        u.x = (long long int) va_arg(args, long long int);
    if ((c == 'x') || (c == 'p'))
        u.s = ft_xtoa(u.x, 'x');
    else if (c == 'X')
        u.s = ft_xtoa(u.x, 'X');
    ft_putstr(u.s);
    len = len + (int)ft_strlen(u.s);
    free(u.s);
    
    return (len);    
}