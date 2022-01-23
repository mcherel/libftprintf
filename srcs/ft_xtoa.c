/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:51:31 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/23 16:00:59 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char *ft_xtoa(size_t n, char flag)
{
    char *result;
    int len;
    result = NULL;
    len = ft_getnblen(n, 16);
    result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len--] = '\0';
    if (n == 0)
		result[0] = '0';
    if (flag == 'x')
	    result = ft_nbtostr(result, n, len, BASE_HEX);
    if (flag == 'X')
	    result = ft_nbtostr(result, n, len, BASE_HEM);
    return (result);
}