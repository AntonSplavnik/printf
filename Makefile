CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c ft_words.c ft_numbers.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

.PHONY: all clean fclean re