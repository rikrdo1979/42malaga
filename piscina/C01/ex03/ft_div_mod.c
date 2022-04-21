/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:38:53 by rechever          #+#    #+#             */
/*   Updated: 2022/02/17 21:27:35 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main(void)
{
	int val1;
	int val2;
	int *div;
	int *mod;

	val1 = 10;
	val2 = 1;
	div = &val1;
	mod = &val2;

	ft_div_mod(val1, val2, div, mod);
}
*/
