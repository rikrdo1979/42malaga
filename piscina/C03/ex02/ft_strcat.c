/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:14:55 by rechever          #+#    #+#             */
/*   Updated: 2022/02/23 12:49:04 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "hola";
	char	dest[] = " mundo";
	char	src1[] = "Sigue Nadando, ";
	char	dest1[] = "Chaval!";

	printf("----\nString: (%s)\n----", ft_strcat(src, dest));
}
*/
