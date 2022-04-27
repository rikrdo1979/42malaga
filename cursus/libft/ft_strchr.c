/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 07:50:08 by rechever          #+#    #+#             */
/*   Updated: 2022/04/27 08:45:23 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	i;
	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s+i));
		i++;
	}
	return (NULL);
}
