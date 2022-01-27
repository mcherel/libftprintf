/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:26:43 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/27 16:04:00 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_utoa(unsigned int n)
{
	char			*result;
	int				len;

	//if (n > UINT_MAX || n < 0)
	//	return (NULL);
	len = ft_getnblen(n, 10);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (n == 0)
		result[0] = '0';
	result = ft_nbtostr(result, n, len, BASE_DEC);
	return (result);
}