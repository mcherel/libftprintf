/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 23:22:48 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/11 17:21:32 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF
#define LIBFTPRINTF

//includes
#include <stdarg.h>
//CONSTANTES
//#define  CONVERTS "cspdiuxX%"
#define INT_MINI -2147483648
#define INT_MAXI 2147483647
#define UINT_MAX 4294967295

//union
/*union uType
{
    char c;
    char *str;
    unsigned char p;
    int i;
    unsigned int u;
    unsigned char x;
    unsigned char X;
}uType;*/

//PROPTOTYPES
int     ft_printf(const char *, ...);
void	ft_putstr(char *str);
char	*ft_strchr( const char *str, int c);
void    ft_print(char *str, ...);
char	*ft_itoa(int n);
//void    *ft_converts(const char *str);//en cours
//size_t	ft_strlen( const char *str );
void    ft_putchar(char c);


#endif
