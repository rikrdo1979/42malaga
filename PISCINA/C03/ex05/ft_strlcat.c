/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:27:12 by rechever          #+#    #+#             */
/*   Updated: 2022/02/24 09:31:10 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	dest_len = x;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src [i] != '\0' && i < size - dest_len - 1)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest_len + src_len);
}

/*
int main(void)
{
	char dest[] = "Hola, como va la piscina";
	char src[] = "Mundo";
	int size = 5;

	printf("%d", ft_strlcat(dest, src, size));
}
*/

/*
* Agrega src a la cadena dest de tamaño size. 
* Agrega el maximo tamaño de caracteres al menos hasta size - dest_len - 1. 
* Siempe termina en NULL.
* Devuelve strlen dest length + src_len.
*/
