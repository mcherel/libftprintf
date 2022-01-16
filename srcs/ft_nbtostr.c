/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbtostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:23:17 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/16 19:25:59 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
//#include <stddef.h>

char	*ft_nbtostr(char *str, unsigned int nb, int len, char *base)
{
	char c;
	int i;
	int div;
	int res;

	div = (int)ft_strlen(base);/*10 ou 16*/
	while (nb > 0)
	{
		res = nb % div;
		if (res < 10)
			c = res + '0';
		else
			c = res - 10 + 'a';
		i = 0;
		while (base[i] != '\0')
			{
				if (c == base[i])
					str[len--] = c;
				i++;
			}
		nb = nb / div;
	}
	return (str);
}