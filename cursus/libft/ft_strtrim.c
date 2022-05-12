/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:02:19 by rechever          #+#    #+#             */
/*   Updated: 2022/05/12 09:02:21 by rechever         ###   ########.fr       */
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

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	int i;
	int j;

	if (!s1)
		return (NULL);
	trim = malloc(sizeof)(char) * (ft_strlen(s1) - ft_strlen(set) + 1);
	while(s1--)
		while(set--)
			if (s1[i] == set[j])
				trim[i]
			set--;


}
