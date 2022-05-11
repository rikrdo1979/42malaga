/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:42:41 by rechever          #+#    #+#             */
/*   Updated: 2022/05/11 10:25:00 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_calloc asigna la cantidad de memoria requerida y retorna un puntero a 
** esta.
** La diferencia entre malloc() y calloc() es que malloc no settea la memoria 
** a 0, mientras que calloc si lo hace.
** 
** @nitems : numero de elementos a asignar
** @size : tamaño de los elementos
**
** Devuelve un puntero a la memoria asignada o NULL si falla la asignacion
*/

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * nitems);
	return (ptr);
}
