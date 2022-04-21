/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:10:18 by rechever          #+#    #+#             */
/*   Updated: 2022/02/23 12:51:20 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			if (to_find[x + 1] == '\0')
				return (&str[i]);
			x++;
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	char *str = "Hola Mundo Nuevo";
	char *to_find ="Mundo";

	printf("-----\nResultado Busqueda:%s\n-----", ft_strstr(str, to_find));
}
*/
/*
** 1er if: cuando el valor de el needle(to_find) esta vacio devuelve 
*  el haystack(str)
** 1er while: mientras str[i+x] es igual a to_find[x] y str[i+x] 
*  no llego al final
***	 	printf("x:(%d) | i:(%d) --> 1er While\n", x, i); 
** 2do while: necesitamos a mantener i para en caso que haya una primera 
*  busqueda pero no coincida seguir el bucle y continuar una nueva en 
*  caso que encuentre algo
*** 	printf("x:(%d) | i:(%d) | x+i:(%d) --> 2do While\n", x, i, (x+i)); 
** 2do if: cuando llega al final de la busqueda (del needle) recoge el valor 
*  inicial del puntero(valor de i) y devuelve la posicion del puntero de i
*/
