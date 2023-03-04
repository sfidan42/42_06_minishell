/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lexer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:15:02 by sfidan            #+#    #+#             */
/*   Updated: 2023/02/28 19:12:19 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_print_content(void *content)
{
	int		i;
	t_list	*sep;

	sep = (t_list *)content;
	i = 0;
	while (sep)
	{
		printf("___%s___", (char *)sep->content);
		sep = sep->next;
	}
	printf("\n");
}

t_list	*ft_lexer(char *line)
{
	t_list	*tree;
	t_list	*sep;
	void	*to_free;

	to_free = (sep = ft_custom_split(line, ';'));
	while (sep)
	{
		ft_lstadd_back(&tree, ft_lstnew(ft_custom_split(sep->content, '|')));
		sep = sep->next;
	}
		
	free(to_free);
	ft_lstiter(tree, ft_print_content);
	return (tree);
}
