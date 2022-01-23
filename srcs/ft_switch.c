/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:27:43 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/22 16:31:12 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

void ft_switch(char c, va_list args)
{
    uType           u;

    if ((c == 'd') || (c == 'i') || (c == 'u'))
        ft_argdiu(c, args, u);
    else if ((c == 'x') || (c == 'X') || (c == 'p'))
        ft_argxXp(c, args, u);
    else if ((c == 's') || (c == 'c') || (c =='%'))
        ft_argsc(c, args, u);
    
//     switch (c) 
//     {
//         case 's': /* chaîne */
//             u.s = (char *)va_arg(args, char *);
//             ft_putstr(u.s);
//             break;
//         case 'd':  /* entier */
//             u.d = va_arg (args, int);
//             u.s = ft_itoa(u.d);
//             ft_putstr(u.s);
//             free(u.s);
//             u.s = NULL;
//             break;
//         case 'c':   /* caractère */
//             u.c = (int)va_arg(args, int);
//             ft_putchar(u.c);
//             break;
//         case 'u':   /* unsigned int */
//             u.u = (unsigned int) va_arg(args, unsigned int);
//             u.s = ft_utoa(u.u);
//             ft_putstr(u.s);
//             free(u.s);
//             break;
//         case 'x':   /* hexa */
//             u.x = (size_t) va_arg(args, size_t);
//             u.s = ft_xtoa(u.x, 'x');
//             ft_putstr(u.s);
//             free(u.s);
//             break;
//         case 'X':   /* hexa */
//             u.x = (size_t) va_arg(args, size_t);
//             u.s = ft_xtoa(u.x, 'X');
//             ft_putstr(u.s);
//             free(u.s);
//             break;
//         case 'p':   /* pointeur */
//             u.p = (void *) va_arg(args, void *);
//             ft_putstr("0x");
//             u.s = ft_xtoa((size_t)u.p, 'x');
//             ft_putstr(u.s);
//             free(u.s);
//             break;
//         case '%': /* % */
//             u.c = '%';
//             ft_putchar(u.c);
//             break;
//    }
}