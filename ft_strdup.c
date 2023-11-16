/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:12 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/12 20:23:41 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	i;

	i = 0;
	if (!(s1))
		return (NULL);
	s = (char *)malloc(ft_strlen(s1) + 1);
	if (!s)
		return (NULL);
	while (*(s1 + i))
	{
		*(s + i) = *(s1 + i);
		i++;
	}
	*(s + i) = '\0';
	return (s);
}
