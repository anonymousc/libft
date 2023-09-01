#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char    *ft_strcpy(char *restrict dest, const char *restrict src);
char    *ft_strcat(char *restrict dest, const char *restrict src);
char    *ft_strstr(const char *haystack, const char *needle);

int ft_strcmp(const char *s1, const char *s2);
size_t ft_strlen(const char *s);
int ft_isalpha(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isalnum(int c);

#endif
