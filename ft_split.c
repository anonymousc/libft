/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:32:41 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/19 01:05:52 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_word(char const *s, char del)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[index] != '\0')
	{
		while (s[index] == del)
			index++;
		if (s[index] != '\0')
			count++;
		while (s[index] != del && s[index] != '\0')
			index++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		size;
	int		index2;
	int		lenght;
	char	**str;

	lenght = len_word(s, c);
	index = 0;
	index2 = 0;
	str = (char **)malloc((len_word(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (index2 < lenght)
	{
		while (s[index] == c && s[index] != '\0')
			index++;
		size = index;
		while (s[index] != c && s[index] != '\0')
			index++;
		str[index2++] = ft_substr(s, size, index - size);
	}
	str[index2] = NULL;
	return (str);
}
