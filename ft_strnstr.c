/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:17 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/29 06:07:14 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!haystack && n == 0)
		return (NULL);
	if (!(needle[j]))
	{
		return ((char *)&haystack[i]);
	}
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && i + j < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
int main()
{
		//char dest[5] = "0123";
	char src[] = "hello world";
	printf("%s", strnstr(NULL, src, 0));
}
FILE