NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS = ft_printf.c \
		ft_aux_unsigned.c \
		ft_aux_string.c \
		ft_aux_pointer.c \
		ft_aux_hex.c \
		ft_aux_putnbr.c \
		ft_putchar.c
OBJS = $(SRCS:.c=.o)
LIB = ar rcs
RM = rm -rf

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
