/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:06:31 by rechever          #+#    #+#             */
/*   Updated: 2022/02/27 14:58:28 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factor;

	factor = 1;
	if (nb > 0)
	{
		factor *= nb * ft_recursive_factorial(nb - 1);
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

printf("-----\nFACTORIAL DE [%d] : %d\n", nb, ft_recursive_factorial(nb));
printf("FACTORIAL DE [%d] : %d\n", nd, ft_recursive_factorial(nd));
printf("FACTORIAL DE [%d] : %d\n-----", nf, ft_recursive_factorial(nf));
}
*/