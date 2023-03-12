#include "parser.h"

void	ft_display_parser(t_list *tree)
{
	char	**content;

	while (tree)
    {
		content = (char **)tree->content;
		while(*content)
			printf("(%s) ", *content++);
		printf("\n");
		tree = tree->next;
	}
	printf("\n");
}