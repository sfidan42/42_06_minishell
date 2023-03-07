SRCS	=	$(shell ls -t *.c)
OBJS	=	$(SRCS:.c=.o)

RED		=	\033[1;31m
GREEN	=	\033[1;32m
YELLOW	=	\033[1;33m
CYAN	=	\033[1;36m
END		=	\033[0m

all: $(OBJS)
	
%.o: %.c
	@gcc -c -Werror -Wextra -Wall $< -o $@
	@printf "$(GREEN)██████"

clean:
	@rm -f $(OBJS)
	@echo "$(RED)utils clean$(END)"

.PHONY: all clean
