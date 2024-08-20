/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:26:35 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/19 14:49:02 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	l1;
	size_t	l2;

	if (!(s1 || s2))
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	p = (char *)malloc(l1 + l2 + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, l1);
	ft_memcpy((p + l1), s2, l2);
	p[l1 + l2] = '\0';
	return (p);
}
