BINS	=	ls.c pwd.c
CFLAGS	=	-Werror -Wextra -Wall

all:
	gcc ls.c $(CFLAGS) -o ls
	gcc pwd.c $(CFLAGS) -o pwd

clean:
	rm -f $(BINS:.c=)

.PHONY: all clean
