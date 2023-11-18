/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:33:52 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/19 00:40:05 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*negative(long n, int d0)
{
	char	*s;
	int		i;

	s = (char *)malloc((d0 + 2) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	s[0] = '-';
	n *= -1;
	while (i < d0)
	{
		s[d0 - i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	s[d0 + 1] = '\0';
	return (s);
}

char	*positive(long n, int d)
{
	char	*s;
	int		i;

	s = (char *)malloc((d + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 1;
	while (i <= d)
	{
		s[d - i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	s[d] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	long	temp;
	int		digit_count;

	temp = (long)n;
	digit_count = 0;
	if (temp == 0)
		digit_count = 1;
	while (temp != 0)
	{
		temp /= 10;
		digit_count++;
	}
	if (n >= 0)
		return (positive(n, digit_count));
	else if (n < 0)
		return (negative(n, digit_count));
	return (NULL);
}
