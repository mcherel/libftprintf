/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argxXp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:25:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/21 22:38:59 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

void ft_argxXp(char c, va_list args, uType u)
{
    if (c == 'p')
    {
        u.p = (void *) va_arg(args, void *);
        ft_putstr("0x");
    }
    else if ((c == 'x') || (c == 'X'))
        u.x = (size_t) va_arg(args, size_t);
    if ((c == 'x') || (c == 'p'))
        u.s = ft_xtoa((size_t)u.p, 'x');
    else if (c == 'X')
        u.s = ft_xtoa(u.x, 'X');
    ft_putstr(u.s);
    free(u.s);
    u.s = NULL;    
}