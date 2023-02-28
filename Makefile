SRCS	=	$(shell ls -t utils/*.c)
OBJS	=	$(SRCS:.c=.o)
NAME 	=	minishell.a
NAME2	=	libft/libft.a
CFLAGS	=	-Werror -Wextra -Wall
RFLAGS	=	-lreadline

all: $(NAME2) $(NAME) minishell

$(NAME): $(SRCS)
	make -C utils
	make -C bin
	ar rcs $(NAME) $(OBJS)

$(NAME2):
	@make -C libft bonus

minishell: minishell.c
	@gcc $(CFLAGS) minishell.c $(NAME) $(NAME2) $(RFLAGS) -o minishell

clean:
	make -C utils clean
	make -C bin clean
	@make -C libft clean

fclean: clean
	rm -f $(NAME) $(NAME2) minishell

re: fclean all

.PHONY: all bonus clean fclean re re_bonus
