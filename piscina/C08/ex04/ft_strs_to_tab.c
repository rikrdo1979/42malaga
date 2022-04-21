/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:08:50 by rechever          #+#    #+#             */
/*   Updated: 2022/03/03 10:50:48 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	char	*d;

	i = -1;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	d = dest;
	if (!d)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*vector;
	struct s_stock_str	*d;

	vector = malloc((argc + 1) * sizeof(struct s_stock_str));
	d = vector;
	if (!d)
		return (NULL);
	i = -1;
	while (++i < argc)
	{
		vector[i].size = ft_str_length(argv[i]);
		vector[i].str = argv[i];
		vector[i].copy = ft_strdup(argv[i]);
	}
	vector[i].str = 0;
	vector[i].copy = 0;
	return (vector);
}

/*
int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = -1;
	while (++i < argc)
	{
		printf("---\na : %s | %p\n", structs[i].str, structs[i].str);
		printf("b : %s | %p\n", structs[i].copy, structs[i].copy);
		printf("s : %d | i : %d\n", structs[i].size, i);
	}
}
*/
