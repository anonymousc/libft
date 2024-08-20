/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:35:05 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/19 15:10:03 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int k, char s)
{
	return (s + k);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	int		i;

	i = 0;
	s1 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s1 || !f)
		return (free(s1), NULL);
	while (s && s[i])
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
