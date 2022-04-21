/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:31:57 by rechever          #+#    #+#             */
/*   Updated: 2022/02/25 12:32:42 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

/*
int main()
{
	char dest[] = "destino";
	char src[] = "origenes y sources";
	char dest1[] = "origenes2";
	int n;

	n = 4;

	ft_strncpy(dest, src, n);
}

strncpy: copia la cantidad de caracteres de 'src' indicada en 'n' dentro de 
'dest'. Devuelve el valor de 'dest' y si 'src' es mas largo rellena con '\0'. 
*/
