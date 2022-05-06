/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:54:15 by rechever          #+#    #+#             */
/*   Updated: 2022/05/06 06:51:17 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlcat — size-bounded string concatenation
** 
** return the total length of the string they tried to create, that means the 
** initial length of dst + the length of src.  
** 
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = ft_strlen(src);
		if (dst != NULL)
		{
			len += ft_strlen(dst);
			i = 0;
			while (src[i] != '\0' && i < size)
			{
				*dst = src[i];
				i++;
			ft_}
		}
	}
	return (len);
}
