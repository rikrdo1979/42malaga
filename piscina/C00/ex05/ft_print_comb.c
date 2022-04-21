/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:37:00 by rechever          #+#    #+#             */
/*   Updated: 2022/02/15 13:15:40 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar( char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' | c != '9')
	{
		write(1, ",  ", 2);
	}
}

void	ft_print_comb(void)
{
	int	cont_a;
	int	cont_b;
	int	cont_c;

	cont_a = '0';
	while (cont_a <= '7')
	{
		cont_b = cont_a + 1;
		while (cont_b <= '8')
		{
			cont_c = cont_b + 1;
			while (cont_c <= '9')
			{
				ft_putchar(cont_a, cont_b, cont_c);
				cont_c++;
			}
			cont_b++;
		}
		cont_a++;
	}
}

void	ft_print_comb(void);

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
