/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:13:19 by rechever          #+#    #+#             */
/*   Updated: 2022/03/03 10:27:39 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_d;
	char	*aux;

	i = -1;
	aux = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	str_d = aux;
	if (!aux)
		return (0);
	while (src[++i])
		str_d[i] = src[i];
	str_d[i] = '\0';
	return (str_d);
}

/*
int main(void)
{
	char *src = "hello";
	char *dest = ft_strdup(src);
	
	printf("src [%s] : [%p]\n", src, &src);
	printf("dest [%s] : [%p]\n", dest, &dest);
	
	return 0;
}
*/

/*
* aux = puntero con la medida del puntero src
* si aux vacio devuelvo 0
* recorro src y voy asignando el valor de a str_d
* cuando finalizo el while agrego el null char y retorno str_d
*/
