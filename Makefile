NAME = libft.a

CC = clang

SRCS = ft_atoi.c ft_isprint.c ft_putchar_fd.c  ft_putendl_fd.c   ft_strrchr.c ft_bzero.c  ft_putnbr_fd.c ft_strlcat.c  \
	   ft_memchr.c ft_putstr_fd.c ft_strlcpy.c  ft_isalnum.c ft_memcmp.c  ft_strlen.c ft_tolower.c \
	  ft_isalpha.c ft_memcpy.c ft_strchr.c  ft_toupper.c ft_isascii.c ft_strdup.c ft_strncmp.c ft_isdigit.c \
	  ft_memset.c  ft_strnstr.c ft_calloc.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_substr.c ft_itoa.c ft_memmove.c ft_strtrim.c ft_split.c 

CFLAGS = -Wall -Wextra -Werror 
	
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo compiling and archiving is done
clean : 
		@rm -rf $(OBJS)
		@echo removing .o files

fclean : clean
		@rm -rf $(NAME)
		@echo removing .a file

re : fclean clean all