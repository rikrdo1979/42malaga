/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 22:44:16 by rechever          #+#    #+#             */
/*   Updated: 2022/04/25 23:07:05 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isprint() comprueba si @c es un caracter imprimible */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126) || (c == ' '))
		return (1);
	return (0);
}
