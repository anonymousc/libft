/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:41:05 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/06 05:09:27 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{  
    if (n == -2147483648)
    {
		ft_putstr_fd("-2147483648",fd);
    }
    if(n < 0)
    {
        n *= -1;
        ft_putchar_fd('-', fd);
    }
    if(n > 9)   
    {     
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
    {
        ft_putchar_fd(n + '0',fd);
    }
}