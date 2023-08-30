#include "libft.h"
#include <ctype.h>

int main()
{
    int i = 48;
    int a = isprint(i);
    write(1, &a, 1);
}