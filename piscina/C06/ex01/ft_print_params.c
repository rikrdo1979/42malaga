/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:54:25 by rechever          #+#    #+#             */
/*   Updated: 2022/02/25 13:08:39 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = -1;
	x = 1;
	while (argc > 1)
	{
		while (argv[x][++i] != '\0')
		{
			ft_putchar(argv[x][i]);
		}
		ft_putchar('\n');
		i = -1;
		x++;
		argc--;
	}
}
