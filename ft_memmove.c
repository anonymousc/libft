/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:27 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/29 23:18:49 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (src == dst)
		return (dst);
	if (!len)
		return (dst);
	else if (d <= s)
		return (ft_memcpy(dst, src, len));
	else
	{
		//printf("overlap");
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
