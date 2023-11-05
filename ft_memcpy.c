/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:25 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/05 00:01:25 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    int i;

    i = 0;
    while (*((char *)dst+i) && i < n)
    {
        *((char *)dst+i) = *((char *)src+i);
        dst++;
    }
    *((char *)src) = '\0';
    return ((char *)dst);
}
int main()
{
    char s2[] = "adam";
    char s1[10];
    ft_memcpy(s2, s1,5);
    printf("%s\n",s1);
}