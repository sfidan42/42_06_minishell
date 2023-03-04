#include "utils.h"

t_list	*ft_custom_split(char *s, char c)
{
	t_list	*str;
	int		flag;
	int		i;
	int		j;

	str = NULL;
	flag = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (flag == 0 && s[i] == '\'')
			flag = 1;
		else if (flag == 0 && s[i] == '\"')
			flag = 2;
		else if (flag == 1 && s[i] == '\'')
			flag = 0;
		else if (flag == 2 && s[i] == '\"')
			flag = 0;
		else
		{
			ft_lstadd_back(&str, ft_lstnew(ft_substr(s, j, i - j)));
			j = i + 1;
		}
		i++;
	}
	return (str);
}
