/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:13:49 by rechever          #+#    #+#             */
/*   Updated: 2022/02/15 13:17:40 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char x, char y, char z, char w)
{
	if (x == '9' && y == '8' && z == '9' && w == '9')
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, " ", 1);
		write(1, &z, 1);
		write(1, &w, 1);
	}
	else
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, " ", 1);
		write(1, &z, 1);
		write(1, &w, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			while (c <= '9')
			{
				d = b;
				while (d++ < '9')
				{
					ft_putchar(a, b, c, d);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

/* 	void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
}*/
