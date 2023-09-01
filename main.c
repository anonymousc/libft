#include "libft.h"
#include <ctype.h>
#include <stdio.h>

// test for ctype functions
/*
int main (){
    char str[] = "";
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

int main()
{
    int i = 65;
    int b = 65;
    //printf("%d\n",isalpha(b));
    int a = isprint(b);
    printf("%d",a);
    write(1,"\n",1);
    write(1,&a,1);
}
*/
// test for strcpy
/*
int main()
{
    char src[] = "adam";
    char dest[3];
    char src1[] = "adam";
    char dest2[3];
    ft_strcpy(dest, src);
    strcpy(dest2,src1);
    printf("%s\n",dest); 
    printf("%s",dest2);  
}
*/
/*
int main()
{
    char a[] = "00";
    char y[] = "04";
    char b[] = "00";
    char d[] = "05";
    int z = ft_strcmp(a,y);
    int s = strcmp(b,d);
    printf("%d\n",z);
    printf("%d",s);
}
*/
//test for strcat
/*
int main()
{
    char dest[] = "yasin ";
    char src[] = "adam";
    ft_strcat(dest,src);
    printf("%s",dest);
}
*/
// test for strlen
/*

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
*/
/*
int main()
{
    char z[] = "adam";
    char l[] = "d";
    char *adam = ft_strstr(z,l);
    printf("%s", adam);
}
*/
// test for strlen
/*
int main()
{
    char* a = "adam";
    char* b = "adam";
   a = (char *)malloc(sizeof(char));
   b = (char *)malloc(sizeof(char));
    printf("%d\n",ft_strlen(a));
    printf("%d\n",strlen(b));
}
*/