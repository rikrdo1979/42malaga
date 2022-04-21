/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:35:54 by rechever          #+#    #+#             */
/*   Updated: 2022/02/17 12:02:32 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 0)
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char word[] = "cafecito";
	int str = ft_strlen(word);

	printf("%d", str);
}
*/
