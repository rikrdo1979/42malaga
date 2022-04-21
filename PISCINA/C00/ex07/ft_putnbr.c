/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:32 by rechever          #+#    #+#             */
/*   Updated: 2022/02/15 16:15:01 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{	
	int c;
	
	if (nb < 10)
	{	
		ft_putchar(nb+48);
	}
	else 
	{
		while (nb >= 1)
		{
		nb = nb/10;
		ft_putchar(nb+48);
		c++;
		}
	}
}

int main(void)
{
	ft_putnbr(1245);
}
