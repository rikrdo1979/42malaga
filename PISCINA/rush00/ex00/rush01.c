/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiestas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:17:23 by ffiestas          #+#    #+#             */
/*   Updated: 2022/02/13 20:15:13 by ffiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"ft_putchar.c"

void	ft_bucle(int g_fi, int g_co);

int	g_f;
int	g_c;
int	g_fi;
int	g_co;

int	rush(g_fi, g_co)
{
	g_f = 1;
	g_c = 1;
	while (g_f <= g_fi)
	{
		while (g_c <= g_co)
		{
			if (g_co == 1 && g_fi == 1)
			{
				ft_putchar('/');
			}
			else
			{
				ft_bucle(g_fi, g_co);
			}
			g_c++;
		}
		ft_putchar('\n');
		g_c = 1;
		g_f++;
	}
	return (0);
}

void	ft_bucle(g_fi, g_co)
{
	if ((g_f == 1 && g_c == 1) || (g_fi == g_f && g_co == g_c))
	{
		if ((g_fi == 1 && g_c == g_co) || (g_f == g_fi && g_co == 1))
		{
			ft_putchar('\\');
		}		
		else if ((g_co == g_fi && g_f == g_fi) || (g_f == 1 && g_c == 1))
		{
			ft_putchar('/');
		}	
	}
	else if ((g_f == 1 && g_c == g_co) || (g_f == g_fi && g_c == 1))
	{
		ft_putchar('\\');
	}
	else if (g_f > 1 && g_c > 1 && g_f < g_fi && g_c < g_co)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}
