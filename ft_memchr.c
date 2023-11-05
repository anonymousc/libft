/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:20 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/05 22:28:46 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    if(!((s) && c))
        return (0);
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*((unsigned char *)(s+i)) == c)
            return ((unsigned char *)(s+i)); 
        i++;
    }
    return (NULL);
}
int main()
{
    char s[] = "adam";
    printf("%s\n",(char *)ft_memchr(s,'d',7));
}