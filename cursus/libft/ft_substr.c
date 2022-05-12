/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:03:14 by rechever          #+#    #+#             */
/*   Updated: 2022/05/12 08:46:27 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reserva (con malloc(3)) y devuelve una substring de la string @s.
** La substring empieza desde el índice @start y tiene una max length = @len
** 
** @s: La string desde la que crear la substring.
** @start: El índice del caracter en @s, desde el que empezar la substring.
** @len: La longitud máxima de la substring.
**
** Devuelve, @str resultante o NULL si falla la reserva de memoria.
*/

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(*s) * (len + 1));
	while (len-- && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	main(int argc, char *argv[])
{
	char			*str;
	unsigned int	start;
	size_t			len;

	if (argc != 4)
	{
		printf("Has olvidado el string.\n");
		exit(1);
	}
	start = atoi(argv[2]);
	len = atoi(argv[3]);
	str = ft_substr(argv[1], start, len);
	printf("String: %s - %lu - %lu", str, start, len);
}
*/
