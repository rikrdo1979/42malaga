/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:21:23 by rechever          #+#    #+#             */
/*   Updated: 2022/05/05 17:53:55 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strlcpy — size-bounded string copying
** 
** The strlcpy() function copies up to size - 1 characters from the 
** NUL-terminated string src to dst, NUL-terminating the result.
** 
** The strlcat() function appends the NUL-terminated string src to the end of 
** dst.  It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result.
** 
** RETURN VALUES
** The strlcpy() functions return the total length of the string, the length 
** of src.
** 
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = ft_strlen(src);
		if (dst != NULL && size != 0)
		{
			i = 0;
			while (i < len && i < (size - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}
/*
int	main(void)
{
	char	*src;
	char	*dst;
	size_t	n;

	src = "Origen";
	dst = "Destino";
	n = 4;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %lu\n", src, dst, n);
	n = ft_strlcpy(dst, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %lu", src, dst, n);
	return (0);
}
*/
