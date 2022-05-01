/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:26:08 by rechever          #+#    #+#             */
/*   Updated: 2022/04/25 13:57:45 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isdigit() comprueba si @c es un numero */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
