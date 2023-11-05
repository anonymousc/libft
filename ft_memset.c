/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:26 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/04 17:10:26 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
  if(!s)
      return 0;
  size_t i;
  char *str;

  i = 0;
  str = (char *)s;
  while (*(str+i) && i < n)
  {
    *(str + i) = c;
    i++;
  }
  return(str);
}
int main()
{
  char s[] = "adam";
  ft_memset(s,'$',2);
  printf("%s\n",s);
}