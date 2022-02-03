/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:51:26 by mcherel-          #+#    #+#             */
/*   Updated: 2022/02/03 15:34:05 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*result;
	size_t			len;

	if (n > INT_MAX || n < (int)INT_MIN)
		return (NULL);
	len = ft_getnblen(n, 10);
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