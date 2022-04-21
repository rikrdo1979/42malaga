/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:20:12 by rechever          #+#    #+#             */
/*   Updated: 2022/02/27 15:40:59 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	if (nb == 0 || nb == 1)
		return (0);
	else
	{
		while (i <= nb)
		{
			if (nb % i == 0)
			{
				x++;
				if (x == 2 && i == nb)
					return (1);
			}
			i++;
		}
	}
	return (0);
}

/*
int main (void)
{
	int nb = 7;
	int nc = 43;
	int nd = 1;
	int ne = 0;
	
	printf("%d es primo: [%d]\n", nb, ft_is_prime(nb));
	printf("%d es primo: [%d]\n", nc, ft_is_prime(nc));
	printf("%d no es primo: [%d]\n", nd, ft_is_prime(nd));
	printf("%d no es primo: [%d]", ne, ft_is_prime(ne));
}
*/