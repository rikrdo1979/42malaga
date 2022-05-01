/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:37:27 by rechever          #+#    #+#             */
/*   Updated: 2022/05/01 07:57:23 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** La función strcmp() compara las dos cadenas de caracteres s1 y s2.  
** Devuelve un entero menor, igual o mayor que cero si se encuentra que s1 es, 
** respectivamente, menor que, igual a (concordante), o mayor que s2.
**
** La función strncmp() es similar, salvo que solamente compara los primeros 
** n caracteres de s1.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	i = 0;
	while (str1[i] && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (n != 0 && i == n)
		return (str1[n - 1] - str2[n - 1]);
	else if (n == 0)
		return (0);
	return (str1[i] - str2[i]);
}
