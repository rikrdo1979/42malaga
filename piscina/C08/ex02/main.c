/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:58:37 by rechever          #+#    #+#             */
/*   Updated: 2022/03/02 17:02:22 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

#include "ft_abs.h"

int main(void)
{
	int index;

	index = -5;
	while (index < 5)
	{
		printf("num %d :: abs %d\n",  index, ABS(index));
		index++;
	}
}