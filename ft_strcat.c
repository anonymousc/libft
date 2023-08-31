#include "libft.h"

char *ft_strcat(char *restrict dest, const char *restrict src)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[j])
    {
        j++;
    }
    while (src[i])
    {
        dest[j + i] = src[i];
        i++;
    }
    dest[j + i] = '\0';
    return(dest);
}