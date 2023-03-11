#include "libft.h"

int	ft_lstfind(t_list *lst, char *content)
{
	int		i;

	i = 0;
	while (lst)
	{
		if (!ft_strncmp((char *)lst->content, content, ft_strlen(content)))
			return (i);
		i++;
		lst = lst->next;
	}
	if (!content)
		return (i);
	return (0);   
}
