#ifndef UTILS_H
# define UTILS_H
# include "../bin/bin.h"
# include <readline/readline.h>

enum	characters
{
	GTGT,
	STST,
	GT,
	ST,
};

t_list	*ft_lexer(char *line);
t_list	*ft_parser(t_list *lst);
void	ft_expander();
void	ft_executor(char **execute, char **argw);

#endif
