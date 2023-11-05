/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:12 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/04 20:26:19 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{   
    char *s;
    size_t i;

    i = 0;
    if(!(s1 && s))
        return 0;
    s  = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
    while (*(s1+i) && i < ft_strlen(s1))
    {
        *(s+i) = *(s1+i);
        i++;
    }
    return((char *)s);
}
 int	main(void)
{
	char	*s1;
 	s1 = "a";
	printf("str: %s\n", strdup(s1));
    //dump5(s1);
 	printf("ft_: %s\n", ft_strdup(s1));
    //d/ump5(s1);
}