/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:45:26 by rechever          #+#    #+#             */
/*   Updated: 2022/05/01 12:15:07 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft memchr() busca un caracter en un area de memoria.
**
** @c (unsigned char) : caracter a buscar
** @s : area de memoria
** @n : tamaño del area
** 
** Devuelve la direccion de la 1ra aparicion de @c o NULL si no encuentra @c
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		if ((unsigned char)c == *str++)
			return ((void *)(str - 1));
	return (NULL);
}
