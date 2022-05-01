/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:10:20 by rechever          #+#    #+#             */
/*   Updated: 2022/05/01 12:21:25 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memset() rellena los primeros @n bytes del area de memoria apuntada por 
** @s con el valor constante de @c
**
** @s : area de memoria
** @c : valor constante
** @n : tamaño del area a rellenar
**
** retorna un puntero al area de memoria @s
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;

	mem = (unsigned char *)s;
	while (n--)
		*mem++ = (unsigned char)c;
	return (s);
}
