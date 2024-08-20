/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:55:23 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/20 08:29:38 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str && str[i])
			free(str[i++]);
		free(str);
	}
	str = NULL;
	return (str);
}

static char	**split(char const *s, char c, int i)
{
	size_t	word_len;
	char	**lst;

	// printf("%ld\n", ft_countword(s ,c));
	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!strchr(s, c))
			{
				word_len = ft_strlen(s);
			}
				printf("split == %s\n", s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			if (!lst[i - 1])
				return (ft_free(lst));
			s += word_len;
		}
	}
	return (lst[i] = NULL, lst);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**lst;

	i = 0;
	if (!s)
		return (NULL);
	lst = split(s, c, i);
	return (lst);
}
int	main()
{
	char **str = ft_split("test test", ' ');
	for (size_t i = 0; str[i]; i++)
		printf("%s\n", str[i]);
}