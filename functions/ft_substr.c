/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:22:55 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/20 08:29:38 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(0x0));
	if (l - start >= len)
		s1 = (char *)malloc((len + 1));
	else
		s1 = (char *)malloc((l - start + 1));
	if (!s1)
		return (NULL);
	if (len >= SIZE_MAX)
		ft_strlcpy(s1, &s[start], l + 1);
	else
		ft_strlcpy(s1, (s + start), (len + 1));
	return (s1);
}
