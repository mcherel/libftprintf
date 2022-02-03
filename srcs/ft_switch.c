/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:27:43 by mcherel-          #+#    #+#             */
/*   Updated: 2022/02/02 16:07:13 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
//#include <stdio.h>

int ft_switch(char c, va_list args)
{
    uType           u;
	
	u.d = 0;
    if ((c == 'd') || (c == 'i') || (c == 'u'))
        return (ft_argdiu(c, args, u));
    /*else if (c == 'x' || c == 'X')
        return (ft_argx(c, args, u));
    else if (c == 'p')
        return (ft_argp(c, args, u));*/
    else if ((c == 'x') || (c == 'X') || (c == 'p'))
        return (ft_argxXp(c, args, u));
    else if ((c == 's') || (c == 'c') || (c =='%'))
        return (ft_argsc(c, args, u));
    return (0);
    
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
