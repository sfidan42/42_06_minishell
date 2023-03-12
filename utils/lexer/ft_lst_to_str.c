#include "lexer.h"

char	**ft_lst_to_str(t_list *lst)
{
	char	**str;
	int		i;
	void	*to_free;

	to_free = lst;
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
	free(to_free);
	return (str);
}
