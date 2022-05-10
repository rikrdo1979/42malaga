/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:33:31 by rechever          #+#    #+#             */
/*   Updated: 2022/05/09 12:36:07 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strrchr() busca la ultima aparicion de un caracter @c en un string @s
**
** @c : caracter a buscar
** @s : string dado
**
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
		str++;
	while (*str != c)
	{
		if (str == s)
		{
			return (NULL);
		}
		str--;
	}
	return (str);
}
