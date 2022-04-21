/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 07:11:28 by rechever          #+#    #+#             */
/*   Updated: 2022/02/26 13:31:00 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main(void)
{
	char 	str[] = "Hola Mundo";
	char    strn[] = "123456789";
	char    stre[] = "";
	char	strs[] = "\t";

	printf("-----\nAlpha: (%d)\n", ft_strlen(str));
	printf("Numeric: (%d)\n", ft_strlen(strn));
	printf("Empty: (%d)\n", ft_strlen(stre));
	printf("Special: (%d)\n-----", ft_strlen(strs));
}
*/

/*
* strlen: longitud, tamaño del string
*/
