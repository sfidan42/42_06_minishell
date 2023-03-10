#ifndef LEXER_H
# define LEXER_H
# include "../../libft/libft.h"
# include <stdio.h>

t_list	*ft_lexer(char *line);

t_list	*ft_custom_split(char *line, char *set);
char	**ft_lst_to_str(t_list *lst);
void	ft_display_lexer(t_list *tree);

#endif
