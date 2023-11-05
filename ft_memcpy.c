/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:25 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/05 22:04:15 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    while (*((char *)src+i) && i < n)
    {
        *((char *)dst+i) = *((char *)src+i);
        i++;
    }
    *((char *)(dst+i)) = '\0';
    return ((char *)dst);
}