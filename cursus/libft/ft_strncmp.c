/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:37:27 by rechever          #+#    #+#             */
/*   Updated: 2022/04/28 13:10:04 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int str1;
	int str2;
	size_t  i;

	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	i = 0;
	if (str1 < str2)
		return(-1);
	if (str1 > str2)
		return(1);
	else
	{
		while (i <= n)
		{
			if (s1[i] != s2[i])
				return(0);
			i++;
		}
	}
	return(1);
}
