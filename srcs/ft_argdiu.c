/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argdiu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:07:31 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/21 22:43:29 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

void    ft_argdiu(char c, va_list args, uType u)
{
    if ((c == 'd') || (c == 'i'))
    {
        u.d = (int) va_arg (args, int);
        u.s = ft_itoa(u.d);
    }
    else if (c == 'u')
    {
        u.u = (unsigned int) va_arg(args, unsigned int);
        u.s = ft_utoa(u.u); 
    }
    ft_putstr(u.s);
    free(u.s);
    u.s = NULL;

}