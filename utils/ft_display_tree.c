#include "utils.h"

void	ft_display_tree(t_list *tree)
{
	t_list	*content;
	
	while (tree)
    {
		content = (t_list *)tree->content;
		while(content)
		{	
			printf("(%s) ", (char *)content->content);
			content = content->next;
		}
		printf("\n");
		tree = tree->next;
	}
	printf("\n");
}