SRCS	=	$(shell ls -t utils/*.c)
OBJS	=	$(SRCS:.c=.o)
NAME	=	minishell.a
NAME2	=	libft/libft.a
CFLAGS	=	-Werror -Wextra -Wall
RFLAGS	=	-I$(HOME)/local/include -L$(HOME)/local/lib -lreadline

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
CYAN = \033[1;36m
END = \033[0m

all: $(NAME2) $(NAME) minishell

$(NAME): $(SRCS)
	@echo "\n\n"
	@echo "$(YELLOW)===> Compiling $(RED)utils$(END)\n"
	@make -C utils
	@echo "   utils are done"
	@echo "\n\n"
	@echo "$(YELLOW)===> Compiling $(RED)bin$(END)\n"
	@make -C bin
	@echo "   bins are done" 
	@echo "\n\n"
	@ar rcs $(NAME) $(OBJS)

$(NAME2):
	@make -C libft bonus

minishell: minishell.c
	@gcc $(CFLAGS) minishell.c $(NAME) $(NAME2) $(RFLAGS) -o minishell

clean:
	@make -C utils clean
	@make -C bin clean
	@make -C libft clean
	@printf "$(RED)minishell clean\n$(END)"


fclean: clean
	@rm -f $(NAME) $(NAME2) minishell

re: fclean all

.PHONY: all bonus clean fclean re re_bonus
