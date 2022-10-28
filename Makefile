SRC = ft_isalpha ft_isdigit ft_isalnum ft_isascii \
		ft_isprint ft_toupper ft_tolower ft_atoi \
		ft_strlen ft_strlcpy ft_strlcat ft_strncmp ft_strrchr \
		ft_strchr ft_strnstr ft_strdup ft_memset \
		ft_memcpy ft_memmove ft_memchr ft_memcmp \
		ft_calloc ft_bzero ft_substr ft_strjoin \
		ft_strtrim ft_split ft_itoa ft_putchar_fd \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_itoa \
		ft_strmapi ft_striteri

B_SRC = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast \
		ft_lstadd_back ft_lstdelone ft_lstclear \
		ft_lstiter ft_lstmap

SRCS = $(addsuffix .c, $(SRC))

B_SRCS = $(addsuffix _bonus.c, $(B_SRC))

CC = cc
NAME = libft.a
CFLAGS = -Wextra -Wall -Werror
RM = rm -rf

OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)

all : $(NAME) 

$(NAME) : $(OBJS) libft.h
	ar rcs $@ $?

bonus : $(B_OBJS)
	ar rcs $(NAME) $?

clean :
	$(RM) $(OBJS) $(B_OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY: all bonus clean fclean re
