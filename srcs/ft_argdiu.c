/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argdiu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:07:31 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/27 12:53:26 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int    ft_argdiu(char c, va_list args, uType u)
{
    int len;

    len = 0;
    if ((c == 'd') || (c == 'i'))
    {
        u.d = (int) va_arg (args, int);
        u.s = ft_itoa(u.d);
        ft_putstr(u.s);
        len = (int)ft_strlen(u.s);
        free(u.s);
        return (len);
    }
    else if (c == 'u')
    {
        u.u = (unsigned int) va_arg(args, unsigned int);
        u.s = ft_utoa(u.u);    
        ft_putstr(u.s);
        len = (int)ft_strlen(u.s);
        free(u.s);
        return (len);
    }
    return (len);
}