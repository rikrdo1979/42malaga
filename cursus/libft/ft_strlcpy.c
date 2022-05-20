/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:21:23 by rechever          #+#    #+#             */
/*   Updated: 2022/05/20 11:27:37 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** ft_strlcpy — copia de un string delimitado por @size
** 
** La funcion copia hasta size - 1 caracteres desde @src hacia @dst finalizando 
** el resultado en NULL
** 
** Retorna el tamaño total del string, el tamaño de @src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
