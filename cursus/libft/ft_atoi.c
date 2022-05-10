/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:20:42 by rechever          #+#    #+#             */
/*   Updated: 2022/05/10 07:18:10 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La funcion atoi() convierte a int) la porcion inicial de un string apuntado 
** por @str
**
** @str : string dado para convertir a int.
**
**	Retorna el valor pasado en @str convertido a int.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = 0;
	i = 0;
	if (!str)
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if (sign % 2 != 0)
		result *= -1;
	return (result);
}
