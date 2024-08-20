/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:28:10 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/19 14:58:44 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1);
	while (s1 && s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1 && s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	s2 = malloc(sizeof(char) * (end - start + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, &s1[start], end - start + 1);
	return (s2);
}
