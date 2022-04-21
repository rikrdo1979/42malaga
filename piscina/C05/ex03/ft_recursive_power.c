/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:18:43 by rechever          #+#    #+#             */
/*   Updated: 2022/02/27 15:05:57 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	pow;

	pow = nb;
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
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

int nb = 1;
int nd = 5;
int nf = 9;
int power = 2;

printf("-----\nPOW%d-[%d]:%d\n", power, nb, ft_recursive_power(nb, power));
printf("POW%d-[%d]:%d\n", power, nd, ft_recursive_power(nd, power));
printf("POW%d-[%d]:%d\n-----", power, nf, ft_recursive_power(nf, power));
}
*/