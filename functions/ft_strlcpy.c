/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:45 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/20 08:29:38 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srcs;
	size_t	i;

	srcs = ft_strlen(src);
	i = -1;
	if (dest && (size > 0 && size <= SIZE_MAX))
	{
		while (src && src[i] && ++i < (size - 1))
			dest[i] = src[i];
		dest[i + 1] = '\0';
	}
	return (srcs);
}
