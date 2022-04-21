/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabbaso <saabbaso@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:31:36 by saabbaso          #+#    #+#             */
/*   Updated: 2022/02/20 21:13:12 by saabbaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void print_matrix(int **matrix, int size);

int errors = 0;

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void 	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

int	search(int *values, int value){
	int result;
	int i = 0;

	result = 0;
	while(values[i] && !result)
	{
		if (values[i] == value){
			result = 1;
		}
		i++;
	}

	return result;
}

int **ft_create_matrix(int h, int w)
{
    int **matrix;
    matrix = (int **)malloc(h * sizeof(int*));
    int i = 0;
    int j;

    while (i < w)
    {
        matrix[i] = (int*)malloc(w * sizeof(int));
        j = 0;
        while (j < h)
        {
            matrix[i][j] = 0;
		  	j++;
        }
        i++;
    }

    return matrix;
}

void	write_possible_combs(char **combs)
{	
	combs[0] = "124213";
	combs[1] = "124123";

	combs[2] = "134312";
	combs[3] = "134231";
	combs[4] = "134132";
	
	combs[5] = "144321";
	
	combs[7] = "213214";
	
	combs[8] = "221423";
	combs[9] = "222413";
	combs[10] = "222143";
	combs[11] = "223412";
	combs[12] = "223142";
	combs[13] = "223241";
	
	combs[14] = "231432";
	combs[15] = "232431";
	combs[16] = "233421";
	
	combs[17] = "311324";
	combs[18] = "312134";
	combs[19] = "312314";

	combs[20] = "321243";
	combs[21] = "321342";
	combs[22] = "322341";
	
	combs[23] = "411234";
}

char	**ft_create_combs(int h, int w)
{
	char	**combs;
	combs = (char **) malloc (h*sizeof(char*));

	int i = 0;
	while (i < h)
	{
		combs[i] = (char *) malloc (w*sizeof(char));
		i++;
	}

	return combs;
}

char	**search_combs(char **combs, int v1, int v2, char *pattern)
{
	int i = 0;
	int j = 0;
	int p = 0;
	int is_valid = 1;
	char **view_combs = ft_create_combs(6, 6);

	while (combs[i])
	{
		if ((combs[i][0] == v1 + '0') && (combs[i][1] == v2 + '0'))
		{
			if (pattern[0])
			{
				while (pattern[p] && is_valid)
				{
					if (pattern[p] == combs[i][p+2] && !pattern[p+1] && is_valid)
					{	
						view_combs[j] = combs[i];
						j++;
					}
					else if(!(pattern[p] == combs[i][p+2]))
					{
						is_valid = 0;
					}
					p++;
				}	
			}
			else
			{
				view_combs[j] = combs[i];
				j++;
			}
		}
		i++;
	}
	return view_combs;
}

int	check(int **matrix, int value, int idx)
{
	int is_valid = 1;
	int i = idx - 1;

	//Buscamos hacia arriba
	while (i != -1 && is_valid)
	{
		if (matrix[i][idx] == value)
			is_valid = 0;
		i--;
	}
	
	i = idx + 1;
	// Buscamos hacia abajo
	while (i != 4 && is_valid)
	{
		if (matrix[i][idx] == value)
			is_valid = 0;
		i++;
	}

	i = idx - 1;
	// Buscamos hacia izquierda
	while (i != -1 && is_valid)
	{
		if (matrix[idx][i] == value)
			is_valid = 0;
		i--;
	}

	i = idx + 1;
	// Buscamos hacia derecha
	while (i != 4 && is_valid)
	{
		if (matrix[idx][i] == value)
			is_valid = 0;
		i++;
	}

	return is_valid;
}

void	print_matrix_int(int **matrix, int size)
{
	int i = 0;
	int j = 0;
	while (i < size)
	{
		while (j < size)
		{
			ft_putchar(matrix[i][j] + '0');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	print_matrix_char(char **matrix)
{
	int i = 0;
	int j = 0;
	while (matrix[i])
	{
		while (matrix[i][j])
		{
			ft_putchar(matrix[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
