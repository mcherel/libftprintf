/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:30:00 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/14 11:39:32 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*receives 'p' 'x' or 'X' in parameter and gives a base for hexadecimal*/
char *ft_base(char c)
{
    char *base;

    if (c == 'X')
        base = "0123456789ABCDEF";
    else if ((c == 'x') || (c == 'p'))
        base = "0123456789abcdef";
    else
        base = NULL;

    return (base);
}