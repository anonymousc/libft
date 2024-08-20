/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:40 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/19 14:32:35 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*s1;

	i = ft_strlen(s);
	s1 = (unsigned char *)s;
	while (s1 && --i >= 0)
		if (s1[i] == (unsigned char)c)
			return ((char *)(s1 + i));
	return ("");
}
