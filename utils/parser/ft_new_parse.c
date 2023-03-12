#include "parser.h"

t_parse	*ft_new_parse(void)
{
	t_parse	*p;

	p = malloc(sizeof(t_parse));
	p->fd_in = STDIN_FILENO;
	p->fd_out = STDOUT_FILENO;
	p->argv = NULL;
	return (p);
}
