CFLAGS = -Werror -Wextra -Wall

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
CYAN = \033[1;36m
END = \033[0m

all: pwd

pwd: bar
	@gcc $(CFLAGS) pwd.c -o pwd

bar:
	@printf "$(GREEN)███ "

clean:
	@rm -f pwd
	@printf "$(RED)bin clean\n$(END)"

.PHONY: all bar clean
