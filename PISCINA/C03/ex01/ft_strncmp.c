/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:51:02 by rechever          #+#    #+#             */
/*   Updated: 2022/02/24 09:19:01 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	src[] = "ABA";
	char	cmp[] = "A";
	char	cmp2[] = "ABA";
	char	cmp3[] = "ACZ";
	unsigned int	n = 6;

	printf("----\n<str1> is greater than <str2> (%d)", ft_strncmp(src, cmp, n));
	printf("\n<str1> and <str2> are equal (%d)\n", ft_strncmp(src, cmp2, n));
	printf("<str1> is less than <str2> (%d)\n----", ft_strncmp(src, cmp3, n));
}
*/
