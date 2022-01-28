/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:51:31 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/27 17:12:46 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char *ft_xtoa(long long int n, char flag)
{
  char *result;
  size_t len;
  
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