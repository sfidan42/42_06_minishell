# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 12:54:28 by sfidan            #+#    #+#              #
#    Updated: 2023/03/01 20:29:56 by muerdoga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
				ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c \
				ft_lstiter.c ft_lstmap.c ft_lstfind.c

BONUS_OBJS	= $(BONUS:.c=.o)

CC	=	gcc
RM	=	rm -f
FLAGS	= -Wall -Wextra -Werror

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
CYAN = \033[1;36m
END = \033[0m

$(NAME): 
		@$(CC) $(FLAGS) -c $(SRCS) 
		@ar rc $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c		@gcc -c -Werror -Wextra -Wall $< -o $@
		@printf "$(GREEN)██████"

bonus:
		@$(CC) $(FLAGS) -c $(SRCS)
		@$(CC) $(FLAGS) -c $(BONUS)
		@ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
		@$(RM) $(OBJS) 
		@$(RM) $(BONUS_OBJS)
		@printf "$(RED)libft clean\n$(END)"


fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
