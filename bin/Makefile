CFLAGS = -Werror -Wextra -Wall

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
CYAN = \033[1;36m
END = \033[0m

all: pwd echo

pwd: bar
	@gcc $(CFLAGS) pwd.c -o pwd

echo: bar
	@gcc $(CFLAGS) echo.c -o echo

bar:
	@printf "$(GREEN)███ "

clean:
	@rm -f pwd echo
	@printf "$(RED)bin clean\n$(END)"

.PHONY: all bar clean
