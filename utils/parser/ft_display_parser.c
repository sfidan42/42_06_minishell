#include "parser.h"

void	ft_display_parser(t_list *tree)
{
	int		i;
	char	**argv;
	t_list	*branch;
	t_parse	parse;

	while (tree)
	{
		i = 0;
		branch = (t_list *)tree->content;
		while (branch)
		{
			parse = *(t_parse *)branch->content;
			printf("node %d:\n", i++);
			printf("fd of input file: %d\n", parse.fd_in);
			printf("fd of output file: %d\n", parse.fd_out);
			printf("argv: ");
			argv = parse.argv;
			while (*argv)
				printf("%s ", *argv++);
			printf("\n");
			branch = branch->next;
		}
		printf("\n");
		tree = tree->next;
	}
	printf("\n");
}
