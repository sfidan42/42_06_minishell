#include "parser.h"

t_parse	*ft_new_parse(void)
{
	t_parse	*parse;

	parse = malloc(sizoef(t_parse));
	parse->fd_infile = STDIN_FILENO;
	parse->fd_outfile = STDOUT_FILENO;
	parse->args = NULL;
	return (parse);
}