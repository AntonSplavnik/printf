CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS =
LIBFT = libft
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	ar rc $(NAME) $(OBJS) -L./$(LIBFT) -lft -c $< -o $@

clean:
	rm -rf $(OBJS)
	rm -rf $(LIBFT)/*.o

fclean: clean
	rm -Rf $(NAME)
	rm -Rf $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re