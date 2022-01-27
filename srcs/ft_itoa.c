/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:51:26 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/27 16:05:01 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

//static int	ft_getlen(int nb);
//static char	*ft_getstr(char *str, unsigned int nb, int len);

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*result;
	int				len;

	if (n > INT_MAXI || n < (int)INT_MINI)
		return (NULL);
	len = ft_getnblen(n, 10);
	//result = (char *)ft_calloc((len + 1), sizeof(char));
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		nb = (unsigned int)n * -1;
		*result = '-';
	}
	else
		nb = (unsigned int)n;
	result = ft_nbtostr(result, nb, len, BASE_DEC);
	return (result);
}
/*
static int	ft_getlen(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb != 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}
*/
/*static char	*ft_getstr(char *str, unsigned int nb, int len)
{
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
*/