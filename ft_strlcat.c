/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:43:10 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/06 03:45:05 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) 
{
    size_t srclen;
    size_t dstlen;
    size_t i;

    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
    i = 0;
    if(!(dstsize && dst))
        return(srclen);
    if(dstlen >= dstsize)
        return (dstlen + srclen); 
    while (src[i] && dstlen + i < dstsize - 1)
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';  
    return (dstlen + srclen);
}