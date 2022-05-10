/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 06:30:10 by rechever          #+#    #+#             */
/*   Updated: 2022/05/10 07:28:16 by rechever         ###   ########.fr       */
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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	if (!big)
		return (NULL);
	b = (char *)big;
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)((b + 1) + (i - j)));
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
