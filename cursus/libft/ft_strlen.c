/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:11:57 by rechever          #+#    #+#             */
/*   Updated: 2022/04/26 23:22:27 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strlen() devuelve el tamaño de @c */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
