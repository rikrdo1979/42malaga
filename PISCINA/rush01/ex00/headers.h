/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabbaso <saabbaso@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:12:11 by saabbaso          #+#    #+#             */
/*   Updated: 2022/02/20 21:06:01 by saabbaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_verify_inputs(char *values);
void	ft_logic_start(int *t, int *r, int *b, int *l);
int	search(int *values, int value);
int	**ft_create_matrix(int h, int w);
char	**ft_create_combs(int h, int w);
char	**search_combs(char **combs, int i, int j, char *p);
int	check(int **matrix, int value, int idx);
void print_matrix_int(int **matrix, int size);
void print_matrix_char(char **matrix);
void	write_possible_combs(char **combs);
