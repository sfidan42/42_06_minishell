SRCS	=	$(shell ls -t commands/*.c) $(shell ls -t utils/*.c)
OBJS	=	$(SRCS:.c=.o)
NAME 	=	minishell.a
NAME2	=	libft/libft.a
CFLAGS	=	-Werror -Wextra -Wall

all: $(NAME2) $(NAME) minishell

$(NAME): $(SRCS)
	make -C utils
	make -C commands
	ar rcs $(NAME) $(OBJS)

$(NAME2):
	@make -C libft

minishell: minishell.c
	@gcc $(CFLAGS) minishell.c $(NAME) $(NAME2) -lreadline -o minishell

clean:
	make -C utils clean
	make -C commands clean
	@make -C libft clean

fclean: clean
	rm -f $(NAME) $(NAME2) minishell

re: fclean all

.PHONY: all bonus clean fclean re re_bonus
