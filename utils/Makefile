SRCS	=	$(shell ls -t *.c)
OBJS	=	$(SRCS:.c=.o)
CFLAGS	=	-Werror -Wextra -Wall

RED		=	\033[1;31m
GREEN	=	\033[1;32m
YELLOW	=	\033[1;33m
CYAN	=	\033[1;36m
END		=	\033[0m

all: $(OBJS)
	
%.o: %.c
	@printf "$(GREEN)███ "
	@gcc -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(RED)utils clean$(END)"

.PHONY: all clean
