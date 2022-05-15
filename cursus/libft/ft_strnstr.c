/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 06:30:10 by rechever          #+#    #+#             */
/*   Updated: 2022/05/14 20:40:10 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strnstr() localiza la primera aparacion del string @little en el string 
** @big, solo se buscan la cantidad de caracteres indicada por @len
** Aquellos caracteres despues de '\0' no se buscan. 
**
** Si @little es un string vacio, devuelve @big
** Si @little no se encuentra en @big devuelve NULL.
** Cualquier otra opcion devuelve un puntero al primer caracter de la primera 
** aparicion de little.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
