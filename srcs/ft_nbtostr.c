/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbtostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:23:17 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/17 15:34:50 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stddef.h>
//#include <stdio.h>

char	*ft_nbtostr(char *str, unsigned int nb, int len, char *base)
{
	char c;
	int i;
	int div;
	int res;
	
	div = (int)ft_strlen(base);/*10 ou 16*/
	//printf("div : %d\n", div);
	//printf("base : %s\n", base);
	//printf("nb : %d\n", nb);
	while (nb > 0)
	{
		res = nb % div;
		if (res < 10)
			c = res + '0';
		else
		{
			if (ft_strcmp(base, BASE_HEX) == 0)
				c = res - 10 + 'a';
			if (ft_strcmp(base, BASE_HEM) == 0)
				c = res - 10 + 'A';
		}
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