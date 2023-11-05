
#include "libft.h"


void dump5(char *str)
{
    char *p = str;
    for (int n = 0; n < 5; ++n)
    {
        printf("%2.2x ", *p);
        ++p;
    }

    printf("\t");

    p = str;
    for (int n = 0; n < 5; ++n)
    {
        printf("%c", *p ? *p : ' ');
        ++p;
    }

    printf("%s\n", str);
}

