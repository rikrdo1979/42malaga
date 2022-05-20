/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:17:47 by rechever          #+#    #+#             */
/*   Updated: 2022/05/20 11:10:58 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** ft_memmove copia los primeros n caracteres del objeto apuntado por @src 
** al objeto apuntado por @dst.Sin embargo, se asegura de que no estén 
** superpuestos. 
** Por esta razón, copia los caracteres a un array/arreglo temporalmente. 
** Después vuelve a copiar del array temporal al objeto en cuestión.
** La función retorna el valor de @dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;
	char	*tmp;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	tmp = (char *)dst;
	str = (char *)src;
	i = 0;
	if (tmp > str)
		while (len--)
			tmp[len] = str[len];
	else
	{	
		while (i < len)
		{
			tmp[i] = str[i];
			i++;
		}
	}
	return (dst);
}
