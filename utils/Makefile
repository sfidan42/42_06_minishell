SRCS	=	$(shell ls -t *.c)

all:
	gcc -c -Werror -Wextra -Wall $(SRCS)

clean:
	rm -f $(SRCS:.c=.o)

.PHONY: all clean
