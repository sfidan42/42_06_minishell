#ifndef UTILS_H
# define UTILS_H
# include "../bin/bin.h"

enum	characters
{
	GTGT,
	STST,
	GT,
	ST,
};


typedef struct s_custom_split_vars
{
	int flag;
	int i;
	int j;
}		t_custom_split_vars;

// main utils
void	ft_intro(void);
void	ft_syntax_check(char *line);
t_list	*ft_lexer(char *line);
t_list	*ft_parser(t_list *lst);
void	ft_expander();
void	ft_executor(char **execute, char **argw);

// helper utils
t_list	*ft_custom_split(char *line, char c);
int		ft_is_bckslh(char *line, int i);
#endif
