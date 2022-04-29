/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:33:31 by rechever          #+#    #+#             */
/*   Updated: 2022/04/29 08:27:11 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
		str++;
	while (*str != c)
	{
		if (str == s)
		{
			return (NULL);
		}
		str--;
	}
	return (str);
}