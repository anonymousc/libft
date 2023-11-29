/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:19 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/29 05:59:38 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	result;
	
	if (!count || !size)
		{
			s = malloc(1);
			((char *)s)[0] = 0;
			return (s); 
		}
	result = count * size;
	if(result / count != size)
		return (0);
	s = malloc(count * size);
	if (!s)
		return (0);
	ft_bzero(s, result);
	return (s);
}
