#ifndef LEXER_H
# define LEXER_H
# include "../../libft/libft.h"

t_list	*ft_lexer(char *line);

t_list	*ft_custom_split(char *line, char *set);
char	**ft_lst_to_str(t_list *lst);

#endif
