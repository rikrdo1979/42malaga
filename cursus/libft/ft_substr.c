/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:03:14 by rechever          #+#    #+#             */
/*   Updated: 2022/05/14 20:39:35 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reserva (con malloc(3)) y devuelve una substring de la string @s.
** La substring empieza desde el índice @start y tiene una max length = @len
** 
** @s: La string desde la que crear la substring.
** @start: El índice del caracter en @s, desde el que empezar la substring.
** @len: La longitud máxima de la substring.
**
** Devuelve, @str resultante o NULL si falla la reserva de memoria.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = malloc(len + 1);
	if (!s || !str)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (len-- && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
