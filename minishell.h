#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"
# include <readline/readline.h>
# include <readline/history.h>
# include <unistd.h>
# include <stdio.h>

// Utils:
void	ft_execute(char **execute, char **argw);
void	ft_lexer();
void	ft_parser();
void	ft_expander();
void	ft_executor();

#endif