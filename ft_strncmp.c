/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:49 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/02 12:15:06 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (!(s1 && s2))
        return 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
    {
        i++;
    }       
   if (s1[i] - s2[i] != 0)
       return(-1);
    return(0);
}