#include "utils.h"

void	ft_match_enum(void *content)
{
	int		i;
	char	**xxxx;

	xxxx = (char **)content;
	i = 0;
	while (xxxx[i])
		printf("___%s___", xxxx[i++]);
	printf("\n");
}

t_list	*ft_parser(t_list *lst)
{
	(void)lst;
	//ft_lstiter(lst, ft_match_enum);
	return (0);
}
