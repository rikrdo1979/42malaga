/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:56:35 by rechever          #+#    #+#             */
/*   Updated: 2022/02/27 14:56:08 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	factor;

	factor = 1;
	while (nb > 0)
	{
		factor *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (factor);
}

/*
int main()
{

int nb = 3;
int nd = 8;
int nf = 10;

printf("-----\nFACTORIAL DE [%d] : %d\n", nb, ft_iterative_factorial(nb));
printf("FACTORIAL DE [%d] : %d\n", nd, ft_iterative_factorial(nd));
printf("FACTORIAL DE [%d] : %d\n-----", nf, ft_iterative_factorial(nf));
}
*/