#ifndef PARSER_H
# define PARSER_H
# include "../../libft/libft.h"
# include <stdio.h>

typedef struct s_parse
{
	int		fd_infile;
	int		fd_outfile;
	char	**argv;
}			t_parse;

t_list	*ft_parser(t_list *tree);

void	ft_display_parser(t_list *tree);

#endif
