/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:26 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/18 23:27:04 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	if (!s)
		return (0);
	str = (unsigned char *)s;
	while (i < n)
	{
		*(str + i) = c;
		i++;
	}
	return (str);
}
// int main()
// {
// 	int i ;
// 	int str[] = {1, 2, 3, 4, 5};
	
// 	memset(str,0,5 * sizeof(int));
// 		for (i = 0; i < 5;i++)
// 	{
// 		printf("%i\n", str[i]);
// 	}
// 	ft_memset(str,4,5 * sizeof(char));
// 	printf("%i\n", str[i]);
// }
