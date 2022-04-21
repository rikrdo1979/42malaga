/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:39:03 by rechever          #+#    #+#             */
/*   Updated: 2022/02/21 20:23:56 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (x < nb && src[x] != '\0')
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "hola";
	char	dest[] = " mundo";
	char	src1[] = "Sigue Nadando, ";
	char	dest1[] = "Chaval!";
	unsigned int	nb  = 24; 

	printf("----\nPrimer string: (%s)\n", ft_strncat(src, dest, nb));
	printf("Segundo string: (%s)\n----", ft_strncat(src1, dest1, nb));
}
*/
