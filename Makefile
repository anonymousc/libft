NAME = libft.a

CC = cc

SRCS = ft_atoi.c ft_isprint.c ft_putchar_fd.c  ft_putendl_fd.c ft_strchr.c #ft_strjoin.c ft_strrchr.c ft_bzero.c ft_itoa.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c \
	  ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c ft_isalnum.c ft_memcmp.c ft_split.c ft_strlen.c ft_tolower.c \
	  ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strncmp.c ft_isdigit.c \
	  ft_memset.c ft_striteri.c ft_strnstr.c 

CFLAGS = -Wall -Wextra -Werror

OBJS = ft_atoi.o ft_isprint.o ft_putchar_fd.o ft_putendl_fd.o  ft_strchr.o #ft_strjoin.o ft_strrchr.o ft_bzero.o ft_itoa.o ft_putnbr_fd.o  ft_strlcat.o ft_strtrim.o \
	  ft_calloc.o ft_memchr.o ft_putstr_fd.o ft_strlcpy.o ft_substr.o ft_isalnum.o ft_memcmp.o ft_split.o ft_strlen.o ft_tolower.o \
	  ft_isalpha.o ft_memcpy.o ft_strchr.o ft_strmapi.o ft_toupper.o ft_isascii.o ft_memmove.o ft_strdup.o ft_strncmp.o ft_isdigit.o \
	  ft_memset.o ft_striteri.o ft_strnstr.o

all : $(NAME) clean

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean : 
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean clean all