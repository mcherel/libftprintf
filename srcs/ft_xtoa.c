/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:51:31 by mcherel-          #+#    #+#             */
/*   Updated: 2022/02/03 10:11:20 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
//#include <stdio.h>

int ft_xtoa(unsigned long n, char flag)
{
  int len;
  len = 0;
  if (n > 15)
  {
    len += ft_xtoa(n / 16, flag);
    //printf("LEN XTOA : %d \n", len);
    //len += ft_xtoa(n % 16, flag);
  }
  if (flag == 'x')
    len += ft_putchar(BASE_HEX[n%16]);
  if (flag == 'X')
    len += ft_putchar(BASE_HEM[n%16]);
//printf("LEN XTOA : %d \n", len);
  return (len);
}