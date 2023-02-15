#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"
# include "commands/commands.h"
# include "utils/utils.h"
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>

// Utils:
void	ft_execute(char **execute);

// Commands:
void	ft_ls();
void	ft_pwd();

#endif