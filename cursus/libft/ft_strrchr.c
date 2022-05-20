/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:33:31 by rechever          #+#    #+#             */
/*   Updated: 2022/05/20 12:24:26 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** ft_strrchr() busca la ultima aparicion de un caracter @c en un string @s
**
** @c : caracter a buscar
** @s : string dado
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	return (last);
}
