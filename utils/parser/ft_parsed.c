#include "parser.h"

t_list	*ft_parsed(char **str)
{
	int		i;
	t_list	*parsed;
	t_list	*argv;
	t_parse	*p;

	i = 0;
	argv = NULL;
	parsed = NULL;
	p = ft_new_parse();
	while (str[i])
	{
		if (str[i][0] == '>')
		{
			if (str[i][1] == '>')
				p->fd_in = open(str[++i], O_CREAT | O_WRONLY | O_APPEND, 0777);
			else
				p->fd_in = open(str[++i], O_CREAT | O_WRONLY, 0777);
		}
		else if (str[i][0] == '<')
		{
			if (str[i][1] == '<')
				p->eof = str[++i];
			else
				p->fd_out = open(str[++i], O_CREAT | O_RDONLY, 0777);
		}
		else if (str[i][0] == '|')
		{
			p->argv = ft_lst_to_str(argv);
			ft_lstadd_back(&parsed, ft_lstnew(p));
			p = ft_new_parse();
		}
		else
			ft_lstadd_back(&argv, ft_lstnew(str[i]));
		i++;
	}
	return (parsed);
}
