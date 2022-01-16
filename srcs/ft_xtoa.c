/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:51:31 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/16 19:48:35 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

char *ft_xtoa(int n)
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
	result = ft_nbtostr(result, n, len, BASE_HEX);
    return (result);
}