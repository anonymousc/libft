/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:32 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/04 18:09:49 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    if(!((s) && c))
        return (0);
    char *str;

    str = (char *)s;
    while (*str && *str != ft_isascii(c))
        str++;
    return (str);
}