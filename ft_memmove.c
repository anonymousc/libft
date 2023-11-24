/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:27 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/24 21:21:13 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (!len)
		return (dst);
	else if (d <= s)
		return (ft_memcpy(dst, src, len));
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
int main()
{
	char s[] = "asdasd";
	char d[] = "sadasd";
	ft_memmove(s,d,7)
} 