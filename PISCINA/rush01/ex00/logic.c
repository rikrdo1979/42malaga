/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*																			  */	
/*   By: saabbaso <saabbaso@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:48:42 by saabbaso          #+#    #+#             */
/*   Updated: 2022/02/20 21:12:39 by saabbaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <stdlib.h>

int	solve(int idx, int dir, int *top, int *bottom, int *left, int *right, int **matrix, char **combs)
{
	int solved = 0;
	int j = 0;
	char *p = (char*)malloc(3*sizeof(char));
	
	// Si estoy en la última casilla he terminado
	if (idx == 3){
        matrix[3][3] = 10 - (matrix[3][0] + matrix[3][1] + matrix[3][2]);
        solved = 1;
    }

	// Recojo los valores previos si los hay (para buscar un patron)
	while ((j < idx) && !solved)
	{
		if (!dir)
		{
			p[j] = matrix[idx][j];
			j++;
		}
		else
		{
			p[j] = matrix[j][idx];
			j++;
		}
	}

	// Me traigo todas las combinaciones de esa vista
	char	**view_combs = NULL;
	if (!dir)
		view_combs = search_combs(combs, left[idx], right[idx], p);
	else
		view_combs = search_combs(combs, top[idx], bottom[idx], p);

	free(p);

	int i = 0;
	j = idx;
	int k = 0; 

	// Mientras me queden combinaciones y no esté el problema resuelto
	while (view_combs[i] && !solved)
	{
		while (view_combs[i][j+2])
		{
			int valid_char = check(matrix, (view_combs[i][j+2] - '0'), idx);
			if(valid_char)
			{
				if (!dir)
				{
					matrix[idx][idx+k] = view_combs[i][j+2] - '0';
				}
				else
				{
					matrix[idx+k][idx] = view_combs[i][j+2] - '0';
				}
				k++;
			}
			j++;
		}

		if (!dir)
		{
			solved = solve(idx, 1, top, bottom, left, right, matrix, combs);
		}
		else
		{
			solved = solve(idx+1, 0, top, bottom, left, right, matrix, combs);
		}
	}

	free(view_combs);
	return solved;
}

void ft_logic_start(int *top, int *right, int *bottom, int *left)
{
	int **matrix = ft_create_matrix(4, 4);
	char **combs = ft_create_combs(24, 6);
	write_possible_combs(combs);

	// 0 -> Escribe derecha
	// 1 -> Escribe abajo
	int solved = solve(0, 0, top, bottom, left, right, matrix, combs);
  	if (solved)
	{
		print_matrix_int(matrix, 4);
	}
	else
	{
		ft_putstr("Fallo");
	}

	free(matrix);
	free(combs);
}
