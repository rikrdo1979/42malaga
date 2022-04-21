/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:00:39 by rechever          #+#    #+#             */
/*   Updated: 2022/02/24 18:16:08 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main ()
{
	char src[] = "ABA";
	char cmp[] = "AB";
	char cmp2[] = "ABA";
	char cmp3[] = "ABZ";

	printf("----\n<str1> is greater than <str2> (%d)", ft_strcmp(src, cmp));
	printf("\n<str1> and <str2> are equal (%d)\n", ft_strcmp(src, cmp2));
	printf("<str1> is less than <str2> (%d)\n----", ft_strcmp(src, cmp3));
}
*/
