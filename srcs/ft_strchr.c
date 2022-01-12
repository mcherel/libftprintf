/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:01:23 by mcherel-          #+#    #+#             */
/*   Updated: 2022/01/07 23:08:51 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr( const char *string, int searchedChar )
{
	while (*string != '\0' && *string != (char)searchedChar)
		string++;
	if (*string == (char)searchedChar)
		return ((char *)string);
	return (NULL);
}
