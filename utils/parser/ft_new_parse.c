#include "parser.h"

t_parse	*ft_new_parse(void)
{
	t_parse	*p;

	p = malloc(sizeof(t_parse));
	p->fd_infile = STDIN_FILENO;
	p->fd_outfile = STDOUT_FILENO;
	p->argv = NULL;
	return (p);
}