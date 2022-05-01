/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:49:27 by rechever          #+#    #+#             */
/*   Updated: 2022/04/26 23:53:18 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_tolower() convierte @c a minusculas */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
			c += 32;
	return (c);
}
