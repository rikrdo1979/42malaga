/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 08:01:21 by rechever          #+#    #+#             */
/*   Updated: 2022/05/01 12:16:46 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** ft_bzero() borra los datos en los n bytes de la memoria, empezando 
** en la posicion apuntada por s, escribiendo zeros (bytes conteniendo '\0')
**
** @s : area de memoria
** @n : cantidad de bytes a borrar
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}
