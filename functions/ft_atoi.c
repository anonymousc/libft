/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:25:16 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/20 08:29:38 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	s;

	i = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	s = 1 - 2 * (str[i++] == '-');
	while (str[i] && ft_isdigit(str[i]))
		res = (res * 10) + str[i++] - '0';
	return (res * s);
}

// int main()
// {
// 	printf("%d", ft_atoi("-12"));
// }