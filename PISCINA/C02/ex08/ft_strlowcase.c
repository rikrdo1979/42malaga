/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:07:23 by rechever          #+#    #+#             */
/*   Updated: 2022/02/20 17:20:05 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "HOLA QUE TAL";
	char str_low[] = "Hola Que Tal";
	char str_emp[] = "";

	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str_low));
	printf("%s\n", ft_strlowcase(str_emp));
}
*/
