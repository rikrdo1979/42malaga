/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:39:28 by rechever          #+#    #+#             */
/*   Updated: 2022/05/10 07:18:46 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memcpy() copia @n caracteres de la memoria @src a la memoria @dest
**
** @n : numero de bytes a copiar
** @s : memoria origen
** @d : memoria destino
**
** retorna un puntero al destino
*/

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	dest = d;
	src = s;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
