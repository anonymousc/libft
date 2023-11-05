/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:40 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/03 03:11:22 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_putstr(char *s)
{
    if(!s)
    {
        return(0);
    }
    while(*s != '\0')
    {
        s++;
    }
    return (s);
}

char *ft_strrchr(const char *s, int c)
{
    char *str;

    str = ft_putstr((char *)s);
    if(!(s && ft_isascii(c)))
    {
        return (0);
    }
    while(*str && *str != c)
    {
        str--;
    }
    return (str);
}