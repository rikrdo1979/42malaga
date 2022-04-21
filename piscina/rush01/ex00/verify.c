/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabbaso <saabbaso@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:39:37 by saabbaso          #+#    #+#             */
/*   Updated: 2022/02/20 14:32:25 by saabbaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <stdio.h>
#include <stdlib.h>

int 	bad_views[] = {11, 24, 33, 34, 42, 43, 44};
int 	error = 0;

void	verify_number_counts(char *values)
{
	int	uno;
	int	dos;
	int	tres;
	int cuatro;
	int i;

	uno = 0;
	dos = 0;
	tres = 0;
	cuatro = 0;
	i = 0;
	while (values[i] && !error)
	{
		if (values[i] == '1')
			uno++;
		else if (values[i] == '2')
			dos++;
		else if (values[i] == '3')
			tres++;
		else if (values[i] == '4')
			cuatro++;
		if (uno > 4 || dos > 8 || tres > 8 ||cuatro > 4)
		{
			ft_putstr("Error\n");
			error = 1;
		}
		i++;
	}
}

void	verify_numbers(char *values)
{
	int	i;
	
	i = 0;
	while (values[i] && !error)
	{
		if ((values[i] != ' ' && values[i] != '1' && values[i] != '2' 
				&& values[i] != '3' && values[i] != '4'))
		{
			ft_putstr("Error\n");
			error = 1;
		}
		else if ((i % 2 != 0) && values[i] != ' ')
		{
			ft_putstr("Error\n");
			error = 1;
		}
		i++;
	}	
	if (i != 31 || (i % 2 == 0 && values[i] == ' '))
	{
		ft_putstr("Error\n");
		error = 1;
	}
}

void	verify_views(char *values, int *top, int *right, int *bottom, int *left)
{
	int	i;

	i = 0;
	top[0] = values[0] - '0';
	top[1] = values[2] - '0';
	top[2] = values[4] - '0';
	top[3] = values[6] - '0';
	right[0] = values[24] - '0';
	right[1] = values[26] - '0';
	right[2] = values[28] - '0';
	right[3] = values[30] - '0';
	left[0] = values[16] - '0';
	left[1] = values[18] - '0';
	left[2] = values[20] - '0';
	left[3] = values[22] - '0';
	bottom[0] = values[8] - '0';
	bottom[1] = values[10] - '0';
	bottom[2] = values[12] - '0';
	bottom[3] = values[14] - '0';
	while (i < 4 && !error)
	{
		if (search(bad_views, ((top[i]*10)+bottom[i])))
		{
			ft_putstr("Error\n");
			error = 1;
		}
		else if (search(bad_views, ((right[i]*10)+left[i])))
		{
			ft_putstr("Error\n");
			error = 1;
		}
		i++;
	}
}

void 	ft_verify_inputs(char *values)
{
	int *top = (int*)malloc(4*sizeof(int));
	int *right = (int*)malloc(4*sizeof(int));
	int *bottom = (int*)malloc(4*sizeof(int));
	int *left = (int*)malloc(4*sizeof(int));

	if (!error)
		verify_numbers(values);
		if (!error)
			verify_number_counts(values);
			if (!error)
				verify_views(values, top, right, bottom, left);
				if (!error)
					ft_logic_start(top, right, bottom, left);
}
