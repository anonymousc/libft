/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:17 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/03 21:21:54 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (needle[0] == '\0')
    {
        return ((char*)haystack);
    }
    while (haystack[i] != '\0' && i < n)
    {
        while (haystack[i + j] != '\0' && haystack[i + j] == needle[j] && i < n)
        {
            if (needle[j + 1] == '\0')
                return ((char *)&haystack[i]);
            j++;
        }
        
        ++i;
    }
    return 0;
}