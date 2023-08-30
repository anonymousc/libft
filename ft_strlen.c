#include "libft.h"
#include <string.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
            i++;
    }
    return (i);
}

#include <stdio.h>
#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    while (av[1][i])
    {
        i++;
    }
    printf("%d\n",ft_strlen(av[1]));
    printf("%d\n",strlen(av[1]));
}