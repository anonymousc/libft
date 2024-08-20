/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:23 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/19 14:27:33 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	int				diff;

	diff = 0;
	i = -1;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (s1 || (s2 && ++i < n))
	{
		diff = tmp1[i] - tmp2[i];
		if (tmp1[i] != tmp2[i])
			return (diff);
	}
	return (0);
}
