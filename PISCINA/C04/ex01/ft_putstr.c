/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 07:46:39 by rechever          #+#    #+#             */
/*   Updated: 2022/02/26 13:30:20 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/*
int main(void)
{
	char 	str[] = "Hola Mundo\n";
	char 	*p_str;
	char    strn[] = "123456789\n";
	char 	*p_strn;
	char    stre[] = "";
	char 	*p_stre;
	char	strs[] = "\t";
	char 	*p_strs;

	p_str = str;
	p_strn = strn;
	p_stre = stre;
	p_strs = strs;

	ft_putstr(p_str);
	ft_putstr(p_strn);
	ft_putstr(p_stre);
	ft_putstr(p_strs);
}
*/
