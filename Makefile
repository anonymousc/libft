NAME = libft.a

CC = cc

SRCS = functions/ft_atoi.c functions/ft_isprint.c functions/ft_putchar_fd.c  functions/ft_putendl_fd.c   functions/ft_strrchr.c functions/ft_bzero.c  functions/ft_putnbr_fd.c functions/ft_strlcat.c  \
	   functions/ft_memchr.c functions/ft_putstr_fd.c functions/ft_strlcpy.c  functions/ft_isalnum.c functions/ft_memcmp.c  functions/ft_strlen.c functions/ft_tolower.c \
	  functions/ft_isalpha.c functions/ft_memcpy.c functions/ft_strchr.c  functions/ft_toupper.c functions/ft_isascii.c functions/ft_strdup.c functions/ft_strncmp.c functions/ft_isdigit.c \
	  functions/ft_memset.c  functions/ft_strnstr.c functions/ft_calloc.c functions/ft_strjoin.c functions/ft_striteri.c functions/ft_strmapi.c functions/ft_substr.c functions/ft_itoa.c functions/ft_memmove.c \
	  functions/ft_strtrim.c functions/ft_split.c functions/ft_isspace.c

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

.SECONDARY : $(OBJS)
