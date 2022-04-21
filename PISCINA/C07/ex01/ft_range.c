/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:12:05 by rechever          #+#    #+#             */
/*   Updated: 2022/03/03 10:30:16 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	range;
	int	i;

	i = -1;
	range = max - min;
	if (min >= max)
		return (0);
	ptr = malloc(range * sizeof(int));
	if (!ptr)
		return (0);
	while (++i < range)
		ptr[i] = min++;
	return (ptr);
}

/*
int main()
{
	int min = 3;
	int max = 10;
	int *ptr;

	ptr = ft_range(min, max);
	while(*ptr != '\0')
		printf("%d\n", *ptr++);
}
*/

/*
* range, resto el max al min para obtener la cantidad de iteraciones
* ptr, asigno memoria suficiente para que quepa el rango dado
* recorro todo el rango y agrego los valores en el ptr creado
*/
