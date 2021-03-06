/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:54:15 by rechever          #+#    #+#             */
/*   Updated: 2022/05/10 07:14:54 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strlcat — concatenacion de strings delimitada por size
** 
** retorna el tamaño total del string que se inteta crear, esto significa, el
** tamaño inicial de @dst + el tamaño de @src. 
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	j = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && (j + 1) < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
