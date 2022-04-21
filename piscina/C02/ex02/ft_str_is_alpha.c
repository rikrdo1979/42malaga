/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:01:47 by rechever          #+#    #+#             */
/*   Updated: 2022/02/20 16:11:26 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			c++;
		}
		else if (str[c] >= 'A' && str[c] <= 'Z')
		{
			c++;
		}
		else
		{
			return (0);
		}
	}	
	return (1);
}

/*
int main()
{
	char str[] = "t";

	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("ABC kl"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
	printf("\n%d", ft_str_is_alpha(""));
	printf("\n%d", ft_str_is_alpha(" "));
}
*/
