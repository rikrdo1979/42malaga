/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:24:22 by rechever          #+#    #+#             */
/*   Updated: 2022/04/25 23:08:59 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isascii() comprueba si @c es ascii */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
