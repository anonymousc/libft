#include "libft.h"

int ft_isalpha(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    if (c >= 97 && c <= 122)
        return (2);
    return (0);
}
