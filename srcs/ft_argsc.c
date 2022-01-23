/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argsc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:41:39 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/23 10:10:34 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

void ft_argsc(char c, va_list args, uType u)
{
    if (c == 's')
    {
        u.s = (char *)va_arg(args, char *);
        ft_putstr(u.s);
    }
    else if (c == 'c')
        u.c = (int)va_arg(args, int);
    else if (c == '%')
        u.c = '%';
    if ((c == 'c') || (c == '%'))
        ft_putchar(u.c);
}