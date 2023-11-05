#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
 
 
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
*/
/*
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
// test for strlcpy
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
   //a = (char *)malloc(sizeof(char));
   //b = (char *)malloc(sizeof(char));
    printf("%lu\n",ft_strlen(a));
    printf("%lu\n",strlen(b));
}
*/
/*
int main()
{
    char *a = " \r -1*12";
    char *b = " \r -1*12";
    int c = ft_atoi(a);
    int s = atoi(b);
    printf("%d\n",c);
    printf("%d\n",s);
}
*/
/*
int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/
//int main()
// {
// 	char *str = "123hel123lo123";
// 	printf("the size of '%s' is: %zu\n",str, ft_strlen(str));
// 	return 0;
// }

/*
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

    printf("\n", str);
}
*/