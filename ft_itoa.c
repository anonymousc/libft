/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:33:52 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/17 05:39:13 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
    char *s1;
    int i;
    
    i = 0;
    s1 = (char *)malloc(sizeof(n) / 4);
    if (n <= 9 && n >= 0)
        s1[i] = n + 48;
    
    return (s1);
}
int main()
{
    int  a = 4;
    printf("%s",ft_itoa(a));
}