/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:12:39 by rechever          #+#    #+#             */
/*   Updated: 2022/02/20 16:51:39 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'a' || str[c] > 'z')
			return (0);
		c++;
	}
	return (1);
}

/*
int main()
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;
	char special[] = "abcdefghijklmnopqrstuvwxyz_";
	char *p_spe;
	p_spe = special;
	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = lowercase\n0 = no lowercase\n\n");
	printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_lowercase(p_emp));
	return (0);
}
*/
