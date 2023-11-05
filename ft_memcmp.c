/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:23 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/04 17:00:45 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
   if(!(s1 && s2 && s1 == s2))
        return 0;
    char *str1;
    char *str2;
    size_t i;

    str1 = (char *)s1;
    str2 = (char *)s2;
    i = 0;
    while (*(str1+i) && *(str2+i) && *(str1+i) == *(str2+i) && n < i)
    {
        *str1 = *str2;
        i++;
    }
    return (*(str1+i) - *(str2+i));
}