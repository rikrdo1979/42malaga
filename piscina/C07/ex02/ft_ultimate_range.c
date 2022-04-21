/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:22:30 by rechever          #+#    #+#             */
/*   Updated: 2022/03/03 10:31:31 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	limit;
	int	i;

	i = -1;
	limit = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(limit * sizeof(int));
	if (!range)
		return (-1);
	while (++i < limit)
		(*range)[i] = min++;
	return (limit);
}

/*
int main()
{
	int min = 2;
	int max = 10;
	int *ptr;
	int size;

	printf("size: [%d]\n\n", (size = ft_ultimate_range(&ptr, min, max)));
	while(*ptr != '\0')
		printf("%d\n", *ptr++);
}
*/

/*
* limit, resto el max al min para obtener la cantidad de iteraciones
* range, asigno la memoria al puntero para que quepa el rango dado
* recorro el limit y agrego los valores en el puntero creado
*/
