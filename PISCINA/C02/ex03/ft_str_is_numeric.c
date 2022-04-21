/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:32:45 by rechever          #+#    #+#             */
/*   Updated: 2022/02/20 16:33:18 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
			return (0);
		c++;
	}
	return (1);
}

/*
int main()
{
	char str[] = "0";

	ft_str_is_numeric(str);
	char numeric[] = "0123456789";
	char *p_num;
	p_num = numeric;
	char special[] = "0123456789_";
	char *p_spe;
	p_spe = special;
	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = Only digits\n0 = Not only digits\n\n");
	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_numeric(p_emp));
}
*/
