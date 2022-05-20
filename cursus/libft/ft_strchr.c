/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:57:01 by rechever          #+#    #+#             */
/*   Updated: 2022/05/20 11:28:38 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** ft_strchr() comprueba si @c esta en @s 
** @s es el string dado
** @c es el caracter a localizar
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
