/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:30:06 by rechever          #+#    #+#             */
/*   Updated: 2022/05/01 16:16:07 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memcmp() compara los primeros n caracteres del objeto apuntado por @s1 
** (interpretado como unsigned char) con los primeros n caracteres del objeto 
** apuntado por @s2 (interpretado como unsigned char).
**
** La función retorna un número entero mayor, igual, o menor que cero, 
** apropiadamente según el objeto apuntado por @s1 es mayor, igual, o menor que 
** el objeto apuntado por @s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (n != 0 && i == n)
		return (str1[i - 1] - str2[i - 1]);
	else if (n == 0)
		return (0);
	return (str1[i] - str2[i]);
}
