/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:06:50 by rechever          #+#    #+#             */
/*   Updated: 2022/03/03 10:33:36 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	l_len(char **strings, int size, int sep_len)
{
	int	f_len;
	int	i;

	f_len = 0;
	i = 0;
	while (i < size)
	{
		f_len += ft_strlen(strings[i]);
		f_len += sep_len;
		i++;
	}
	f_len -= sep_len;
	return (f_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_len;
	int		i;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	t_len = l_len(strs, size, ft_strlen(sep));
	string = (char *)malloc((t_len + 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
	}
	*d = '\0';
	return (string);
}

/*
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 4 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 11 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 15 + 1);
	strs[0] = "Hola";
	strs[1] = "piscineros,";
	strs[2] = "que tal el dia?";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
}
*/
