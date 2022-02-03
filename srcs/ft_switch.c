/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:27:43 by mcherel-          #+#    #+#             */
/*   Updated: 2022/02/03 12:30:13 by mcherel-         ###   ########.fr       */
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
    else if ((c == 'x') || (c == 'X') || (c == 'p'))
        return (ft_argxXp(c, args, u));
    else if ((c == 's') || (c == 'c') || (c =='%'))
        return (ft_argsc(c, args, u));
    return (0);
}
