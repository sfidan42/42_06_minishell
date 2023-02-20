SRCS	=	$(shell ls -t *.c)

all:
	lex shell.l
	gcc -c -Werror -Wextra -Wall $(SRCS)

clean:
	rm -f $(SRCS:.c=.o) lex.yy.c

.PHONY: all clean
