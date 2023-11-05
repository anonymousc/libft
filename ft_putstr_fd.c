/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:39:21 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/03 21:41:17 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if(s == NULL)
        return ;
    int i;

    i = 0;
    while (s[i])
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }    
}