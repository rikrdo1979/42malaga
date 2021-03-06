/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:49:11 by rechever          #+#    #+#             */
/*   Updated: 2022/05/20 12:01:02 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reserva (con malloc(3)) y devuelve una nueva string, formada por la 
** concatenación de @s1 y @s2.
**
** @s1: La primera string.
** @s2: La string a añadir a ’s1’.
**
** Devuelve la nueva string o NULL si falla la reserva de memoria.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str3;
	unsigned int	len1;
	unsigned int	len2;
	int				i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	str3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str3)
		return (NULL);
	while (len1--)
	{
		str3[i] = s1[i];
		i++;
	}
	len1 = i;
	i = 0;
	while (len2--)
		str3[len1++] = s2[i++];
	str3[len1] = '\0';
	return (str3);
}
