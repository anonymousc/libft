/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:32 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/06 18:39:42 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{   
    size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s);
    while (i <= len)
	{
		if (s[i] == (unsigned char )c)
        	return ((char *)s+i);
		i++;
	}
    return (NULL);
}