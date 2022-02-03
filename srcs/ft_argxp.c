/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argxp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:25:08 by mcherel-          #+#    #+#             */
/*   Updated: 2022/02/03 16:22:34 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_argxp(char c, va_list args, t_uType u)
{
	int	len;

	len = 0;
	if (c == 'p')
	{
		u.p = va_arg(args, void *);
		if (u.p == 0)
		{
			ft_putstr(PTR_NULL);
			return ((int)ft_strlen(PTR_NULL));
		}
		ft_putstr("0x");
		len = 2;
		u.x = (unsigned long)u.p;
	}
	else if ((c == 'x') || (c == 'X'))
		u.x = (unsigned int) va_arg(args, int);
	if ((c == 'x') || (c == 'p'))
		len += ft_xtoa(u.x, 'x');
	else if (c == 'X')
		len += ft_xtoa(u.x, 'X');
	return (len);
}
