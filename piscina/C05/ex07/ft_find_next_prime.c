/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:31:05 by rechever          #+#    #+#             */
/*   Updated: 2022/02/28 18:23:36 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_prime_founded(int i, int nb)
{
	int	x;

	x = 0;
	while (++i <= nb + 1)
	{
		if (x > 2)
		{
			nb++;
			i = 1;
			x = 0;
		}
		if (nb % i == 0 || i == 1)
		{
			if (++x == 2 && i == nb)
				return (nb);
		}
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (2);
	else if (nb >= 2147483647)
		return (2147483647);
	nb = nb + 1;
	if (nb > 0 && nb < 2147483647)
		return (ft_prime_founded(i, nb));
	return (1);
}

/*
int	main (void)
{
	int	nb = 2;
	int	nc = 43;
	int	nd = 1;
	int	ne = 0;
	int	nf = -2147483643;

	printf("%d siguiente primo: [%d]\n", nb, ft_find_next_prime(nb));
	printf("%d siguiente primo: [%d]\n", nc, ft_find_next_prime(nc));
	printf("%d siguiente primo: [%d]\n", nd, ft_find_next_prime(nd));
	printf("%d siguiente primo: [%d]\n", nf, ft_find_next_prime(nf));
	printf("%d siguiente primo: [%d]", ne, ft_find_next_prime(ne));
}
*/
