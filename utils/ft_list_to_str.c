#include "utils.h"

char	**ft_list_to_str(t_list *lst)
{
	char	**str;
	int		i;

	str = malloc((ft_lstsize(lst) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (lst)
	{
		str[i++] = (char *)lst->content;
		lst = lst->next;
	}
	str[i] = NULL;
	return (str);
}
