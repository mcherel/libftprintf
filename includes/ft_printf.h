/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <mcherel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 23:22:48 by mcherel-          #+#    #+#             */
/*   Updated: 2022/02/03 16:23:53 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// includes
# include <stdarg.h>
# include <stddef.h>
//CONSTANTES
# ifdef __APPLE__ 
#  define PTR_NULL "0x0"
# elif __GNUC__
#  define PTR_NULL "(nil)"
# endif

# define FORMAT "cspdiuxX%"
# define INT_MIN -2147483648
# define INT_MAX 2147483647
# define UINT_MAX 4294967295
# define LONG_MAX INT_MAX
# define LONG_MIN INT_MIN
# define ULONG_MAX UINT_MAX
# define BASE_DEC "0123456789"
# define BASE_HEM "0123456789ABCDEF"
# define BASE_HEX "0123456789abcdef"

//union
typedef union uType
{
	char			c;
	char			*s;
	void			*p;
	int				d;
	unsigned int	u;
	unsigned long	x;
}					t_uType;

//PROPTOTYPES
int		ft_printf(const char *str, ...);
void	ft_putstr(char *str);
char	*ft_itoa(int n);
size_t	ft_strlen( const char *str );
int		ft_putchar(char c);
int		ft_getnblen(long long int nb, int baselen);
char	*ft_nbtostr(char *str, long long int nb, size_t len, char *base);
char	*ft_utoa(unsigned int n);
int		ft_xtoa(unsigned long n, char flag);
int		ft_switch(char c, va_list args);
int		ft_argsc(char c, va_list args, t_uType u);
int		ft_argdiu(char c, va_list args, t_uType u);
int		ft_argxp(char c, va_list args, t_uType u);

#endif
