/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:30:33 by rechever          #+#    #+#             */
/*   Updated: 2022/02/20 17:48:18 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || str[c] > 'Z')
			return (0);
		c++;
	}
	return (1);
}

/*
int main()
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRST";
	char *p_upper;
	p_upper = uppercase;
	char special[] = "ABCDEF_";
	char *p_spe;
	p_spe = special;
	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = uppercase\n0 = no uppercase\n\n");
	printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_upper));
	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_uppercase(p_emp));
	return (0);
}
*/
