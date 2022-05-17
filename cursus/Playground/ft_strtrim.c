/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:02:19 by rechever          #+#    #+#             */
/*   Updated: 2022/05/15 16:45:11 by rechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Elimina todos los caracteres de la string @set desde el principio y desde 
** el final de @s1, hasta encontrar un caracter no perteneciente a @set. La
** string resultante se devuelve con una reserva de malloc()
**
** @s1: La string que debe ser recortada.
** @set: Los caracteres a eliminar de la string.
** 
** Devuelve la string recortada o NULL si falla la reserva de memoria.
*/

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    char    *str2;
    size_t    i;
    size_t    j;
    size_t    k;
    size_t    found;
    size_t    slen;
    size_t    setlen;

    i = 0;
    j = 0;
    k = 0;
    found = 0;
    slen = (size_t)ft_strlen(s1);
    setlen = (size_t)ft_strlen(set);
    if (s1 == NULL)
        return (NULL);
    if (slen == 0)
      return(ft_strdup(""));
    str = malloc(slen - setlen + 1);    
    while (i < slen)
    {
        while (j < setlen)
        {
            if (s1[i] != set[j])
                found++;
            j++;
        }
        if (found == setlen)
        {
            str[k] = s1[i];
            k++;
        }
        found = 0;
        j = 0;
        i++;
    }
    str[k] = '\0';
    str2 = malloc(k + 1);
    while (j < k)
    {
      str2[j] = str[j];
      j++;
    }
    free(str);
    str2[j] = '\0';
    return (str2);
}
