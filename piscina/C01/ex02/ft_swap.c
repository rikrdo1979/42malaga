/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:01:20 by rechever          #+#    #+#             */
/*   Updated: 2022/02/17 11:53:07 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int	main(void)
{
	int val01;
	int val02;
	int *ptr1;
	int *ptr2;

	val01 = 3;
	val02 = 1;
	ptr1 = &val01;
	ptr2 = &val02;

	ft_swap(ptr1, ptr2);

}
*/
