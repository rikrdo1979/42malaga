/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:30:06 by rechever          #+#    #+#             */
/*   Updated: 2022/05/14 20:37:43 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memcmp() compara los primeros n caracteres del objeto apuntado por @s1 
** (interpretado como unsigned char) con los primeros n caracteres del objeto 
** apuntado por @s2 (interpretado como unsigned char).
**
** La función retorna un número entero mayor, igual, o menor que cero, 
** según el objeto apuntado por @s1 es mayor, igual, o menor que 
** el objeto apuntado por @s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*str1 == *str2 && n-- > 0)
	{
		str1++;
		str2++;
		if (n == 0)
			return (0);
	}
	if (*str1 != *str2)
	{
		return (*str1 - *str2);
	}
	return (0);
}
