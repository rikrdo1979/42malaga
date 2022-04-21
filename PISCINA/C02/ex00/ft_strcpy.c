/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:06:06 by rechever          #+#    #+#             */
/*   Updated: 2022/02/20 13:28:16 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
			dest[c] = src[c];
			c++;
	}
	dest[c] = '\0';
	return (dest);
}

/*
int main()
{
	char dest[] = "destino";
	char src[] = "origen";

	ft_strcpy(dest, src);
	printf("%s", ft_strcpy(dest, src));
	
}

strcpy: copia la cadena 'src' dentro de 'dest'. Devuelve el valor de 'dest'.
*/
