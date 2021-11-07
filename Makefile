CC = gcc
AR = ar
NAME = libft.a
flags = -Wall -Wextra -Werror
SRCBNS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_strlcpy.c ft_strncmp.c ft_strlcat.c ft_calloc.c ft_strnstr.c ft_strdup.c ft_substr.c ft_itoa.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJBNS = $(SRCBNS:.c=.o)
OBJSRC = $(SRCS:.c=.o)
all : $(NAME)
$(NAME):
	@$(CC) $(flags) -c $(SRCS)
	@$(AR) rc $(NAME) *.o
so:
	$(CC) -fPIC $(flags) $(SRCS) $(SRCBNS)
	gcc -shared -o libft.so $(OBJBNS) $(OBJSRC)
bonus:
	@$(CC) $(flags) -c $(SRCBNS)
	@$(AR) rc $(NAME)  $(OBJBNS)
clean: 
	@rm -rf $(OBJBNS) $(OBJSRC)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
