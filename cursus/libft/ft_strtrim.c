/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:02:19 by rechever          #+#    #+#             */
/*   Updated: 2022/05/12 18:55:04 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Elimina todos los caracteres de la string @set desde el principio y desde 
** el final de @s1, hasta encontrar un caracter no perteneciente a @set. La
** string resultante se devuelve con una reserva de malloc()
**
** @s1: La string que debe ser recortada.
** @set: Los caracteres a eliminar de la string.
** 
** Devuelve la string recortada o NULL si falla la reserva de memoria.
*/

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	if (!s1)
		return (NULL);
	trim = malloc(sizeof(char) * (strlen(s1) - strlen(set) + 1));
	i = 0;
	j = 0;
	k = 0;
	while (set--)
	{
		while (s1--)
		{
			if (s1[i] != set[j])
			{
				trim[k] = s1[i];
				k++;
			}
			i++;
		}
		j++;
		set--;
	}
	trim[k] = '\0';
	return (trim);
}

char	main(int argc, char *argv[])
{
	char	*s1;
	char	*set;
	char	*str;

	if (argc != 3)
	{
		printf("Has olvidado el string.\n");
		exit(1);
	}
	str = ft_strtrim(argv[1], argv[2]);
	printf("String: %s - %s - %s", str, argv[1], argv[2]);
}
