/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:40 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/16 01:49:28 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	unsigned  char *s1;
	
	i = ft_strlen(s);
	s1 = (unsigned char *)s;
	while (i >= 0)
	{
		if (s1[i] == (unsigned char)c)
			return ((char*)(s1 + i));
		i--;
	}
	return (NULL);
}
