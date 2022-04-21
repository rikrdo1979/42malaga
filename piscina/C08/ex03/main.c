/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:12:11 by rechever          #+#    #+#             */
/*   Updated: 2022/03/02 17:12:14 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}
int main(void)
{
    t_point point;
    set_point(&point);
    return (0);
}