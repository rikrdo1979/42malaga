/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:11:03 by rechever          #+#    #+#             */
/*   Updated: 2022/02/17 21:22:31 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b > 0)
	{
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
	}
}

/*
int main(void)
{
	int a;
	int b;
	int *ptr0;
	int *ptr1;
	
	a = 49;
	b = 0;
	ptr0 = &a;
	ptr1 = &b;
	ft_ultimate_div_mod(ptr0, ptr1);
}
*/
