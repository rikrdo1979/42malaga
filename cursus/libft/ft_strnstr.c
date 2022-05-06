/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 06:30:10 by rechever          #+#    #+#             */
/*   Updated: 2022/05/05 12:00:26 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** The strnstr() function locates the first occurrence of the null-terminated 
** string little in the string big, where not more than len characters are 
** searched.  
** Characters that appear after a ‘\0’ character are not searched.  Since the 
** strnstr() function is a FreeBSD specific API, it should only be used when 
** portability is not a concern.
** 
** RETURN VALUES
** If little is an empty string, big is returned; if little occurs nowhere in 
** big, ** NULL is returned; otherwise a pointer to the first character of the 
** first occurrence of little is returned.
** 
** EXAMPLES
** The following sets the pointer ptr to NULL, because only the first 4 chars 
** of largestring are searched:
** 
** 	const char *largestring = "Foo Bar Baz";
** 	const char *smallstring = "Bar";
** 	char *ptr;
** 	ptr = strnstr(largestring, smallstring, 4);

** #include <stdio.h>
** #include <stdlib.h>
** #include <string.h>
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	if (!big)
		return (NULL);
	b = (char *)big;
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)((b + 1) + (i - j)));
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*i1;
	char	*i2;
	char	*i3;
	char	*i4;
	char	*i5;

	i1 = ft_strnstr("ipsum lorem dolor sit lorem ipsum dolor", "lorem", 15);
	i2 = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	i3 = ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsumm", 145);
	i4 = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
	i5 = ft_strnstr("", "dolor", 0);
	printf("ft_strnstr: \n%s\n%s\n%s\n%s\n%s\n", i1, i2, i3, i4, i5);
	return (0);
}
*/
