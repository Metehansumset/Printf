NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS =  ft_put_base.c \
		ft_put_pointer.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_printf.c 

OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@


$(NAME) : $(OBJS)
		ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean: 
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re