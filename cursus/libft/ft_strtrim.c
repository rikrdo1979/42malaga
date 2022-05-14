/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:02:19 by rechever          #+#    #+#             */
/*   Updated: 2022/05/12 18:55:04 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Elimina todos los caracteres de la string @set desde el principio y desde 
** el final de @s1, hasta encontrar un caracter no perteneciente a @set. La
** string resultante se devuelve con una reserva de malloc()
**
** @s1: La string que debe ser recortada.
** @set: Los caracteres a eliminar de la string.
** 
** Devuelve la string recortada o NULL si falla la reserva de memoria.
*/

#include <stdio.h>
#include <string.h>

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	//char	*str;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	found;
	size_t	slen;
	size_t	setlen;

	i = 0;
	j = 0;
	k = 0;
	found = 0;
	slen = ft_strlen(s1);
	setlen = ft_strlen(set);
	//str = 0;
	//str = malloc(sizeof(char) * (slen - setlen + 1));	
	if (s1 == NULL)
		return (NULL);
	while (i < slen)
	{
		while (j < setlen)
		{
			if (s1[i] != set[j])
				found++;
			j++;
		}
		if (found == setlen)
		{
			s1[k] = s1[i];
			k++;
			//printf("%ld\n", k);
		}
		found = 0;
		j = 0;
		i++;
	}
	s1[k] = '\0';
	//printf("%ld | %lu\n", (slen - setlen + 1),sizeof(str));
	return (s1);
}

int main(void)
{
	printf("%s\n", ft_strtrim("hooooola", "oa"));
	//printf("%s\n", ft_strtrim("", "oa"));
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));

}

