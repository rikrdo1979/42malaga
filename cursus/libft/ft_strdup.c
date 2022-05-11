/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:04:31 by rechever          #+#    #+#             */
/*   Updated: 2022/05/11 11:15:50 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strdup() duplica un string.
**
** @s : string dado
**
** Devuelve un puntero al nuevo string que es el duplicado del string @s o NULL
** si la memoria disponible es insuficiente.
**
** El espacio de memoria se consigue con malloc() y se libera con free()
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*s_der;
	char	*dup;

	i = 0;
	s_der = (char *)s;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s_der) + 1));
	if (dup == NULL)
		return (NULL);
	else
	{
		while (s[i] != '\0')
		{
			dup[i] = s_der[i];
			i++;
		}
		dup[i] = '\0';
		return (dup);
	}
}
