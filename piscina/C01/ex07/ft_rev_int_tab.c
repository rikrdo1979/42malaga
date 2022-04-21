/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:05:31 by rechever          #+#    #+#             */
/*   Updated: 2022/02/17 20:50:57 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	z;
	int	aux;

	i = 0;
	z = size;
	while (i < (size / 2))
	{
		z--;
		aux = tab[i];
		tab[i] = tab[z];
		tab[z] = aux;
		i++;
	}
}

/*
int	main(void)
{
	int	tab[] = {8, 7, 6, 5, 4};

	int	size = 5;
	ft_rev_int_tab(tab, size);
}
*/
