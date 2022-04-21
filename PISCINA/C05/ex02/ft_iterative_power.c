/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:00:41 by rechever          #+#    #+#             */
/*   Updated: 2022/02/28 11:30:38 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = nb;
	while (power > 1)
	{	
		pow = pow * nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (pow);
}

/*
int main()
{
	printf("-----\n0^2: %d\n", ft_iterative_power(0, 2));
	printf("1^1000:%d\n", ft_iterative_power(1, 1000));
	printf("3^3:%d\n", ft_iterative_power(3, 3));
	printf("2^10:%d\n-----", ft_iterative_power(2, 10));
}
*/
