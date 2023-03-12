#ifndef PARSER_H
# define PARSER_H
# include "../../libft/libft.h"
# include <stdio.h>
# include <fcntl.h>

typedef struct s_parse
{
	int		fd_infile;
	int		fd_outfile;
	char	**argv;
	char	*eof;
}			t_parse;

t_list	*ft_parser(t_list *tree);

t_list	*ft_parsed(char **str);
t_parse	*ft_new_parse(void);
void	ft_display_parser(t_list *tree);
char	**ft_lst_to_str(t_list *lst);

#endif
