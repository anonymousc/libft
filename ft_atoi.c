/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:16 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/04 23:49:37 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    unsigned long long res;
    int s;
    
    i = 0;
    res = 0;
    s = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        s *= -1;
        i++;
    }
    if(str[i] == '+')
    {
        s *= 1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res *= 10;
        res += str[i] - '0';
        i++;
        if(res > 2147483647) 
            return (-1);
        if(res < -2147483647)
            return (0);
    }
    return(res * s);
}