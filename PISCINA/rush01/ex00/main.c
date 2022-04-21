/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabbaso <saabbaso@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:16:19 by saabbaso          #+#    #+#             */
/*   Updated: 2022/02/20 10:49:54 by saabbaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int main(int argc, char *args[]) 
{
	if (argc == 2)
	{
		char *shell_values = args[1];

		ft_verify_inputs(shell_values);
	}
	return (0);
}
