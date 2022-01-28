/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 23:22:48 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/23 10:10:52 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF
#define PRINTF

//includes
#include <stdarg.h>
#include <stddef.h>
//CONSTANTES
#ifdef __APPLE__
#define PTR_NULL "(null)"
#elif __GNUC__
#define PTR_NULL "(nil)"
#endif

#define FORMAT "cspdiuxX%"
#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define UINT_MAX 4294967295
#define LONG_MAX INT_MAX
#define LONG_MIN INT_MIN
#define ULONG_MAX UINT_MAX
#define BASE_DEC "0123456789"
#define BASE_HEM "0123456789ABCDEF"
#define BASE_HEX "0123456789abcdef"

//union
typedef union
{
    char c;
    char *s;
    void *p;
    int d;
    unsigned int u;
    size_t x;
    size_t X;
}uType;

//PROPTOTYPES
int     ft_printf(const char *, ...);
void	ft_putstr(char *str);
char	*ft_strchr( const char *str, int c);
void    ft_print(char *str, ...);
char	*ft_itoa(int n);
int	    ft_strcmp(char *s1, char *s2);
size_t	ft_strlen( const char *str );
void    ft_putchar(char c);
int     ft_getnblen(long int nb, int baselen);
char	*ft_nbtostr(char *str, long unsigned int nb, size_t len, char *base);
char	*ft_utoa(unsigned int n);
char    *ft_xtoa(size_t n, char flag);
int     ft_switch(char c, va_list args);
int     ft_argsc(char c, va_list args, uType u);
int     ft_argdiu(char c, va_list args, uType u);
//void    ft_argc(char c, va_list args);
//void    ft_argc(char c, va_list args, uType u);
//void    ft_argu(char c, va_list args, uType u);
int     ft_argxXp(char c, va_list args, uType u);
//void    ft_argp(char c, va_list args, uType u);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc( size_t elementCount, size_t elementSize);

#endif
