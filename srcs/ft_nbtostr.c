/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbtostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:23:17 by mcherel-          #+#    #+#             */
/*   Updated: 2022/02/03 12:42:01 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

char	*ft_nbtostr(char *str, long long int nb, size_t len, char *base)
{
	char c;
	size_t i;
	size_t div;
	size_t res;
	
	div = ft_strlen(base);/*10 ou 16*/
	while (nb > 0)
	{
		res = nb % div;
		c = res + '0';
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