/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:48:31 by rechever          #+#    #+#             */
/*   Updated: 2022/02/20 17:11:11 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
			return (0);
		c++;
	}
	return (1);
}

/*
int main()
{
	char print[] = "Hola";
	char *pr;
	pr = print;
	char empty[] = "";
	char *emp;
	emp = empty;
	char n_print[] = "Unprintables: \t (tab), \a (?)";
	char *n_pr;
	n_pr = n_print;

	printf("print: %d\n", ft_str_is_printable(pr));
	printf("empty: %d\n", ft_str_is_printable(emp));
	printf("no print: %d\n", ft_str_is_printable(n_pr));
}
*/
