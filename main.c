#include "libft.h"
#include <ctype.h>
#include <stdio.h>

/*int main()
{
    int i = 65;
    int b = 65;
    //printf("%d\n",isalpha(b));
    int a = ft_isalpha(b);
    printf("%d",a);
    write(1,"\n",1);
    write(1,&a,1);
}
*/
int main (){
    char str[] = "123adam";
    int alpha = 0, num = 0,i;
    for(i = 0;str[i] != '\0'; i++)
    {
        if (ft_isalpha(str[i]) != 0)
        {
            alpha++;
        }
        else if (ft_isdigit(str[i]) != 0)
        {
            num++;
        }
    }
    printf("alpahbets are : %d\n numbers are : %d\n",alpha,num);
}