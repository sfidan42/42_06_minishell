/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lexer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:15:02 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/07 15:38:49 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_list	*ft_lexer(char *line)
{
	t_list	*tree;
	t_list	*sep;
	char	*semi[2];
	char	*meta_set[7];

	semi[0] = ";";
	semi[1] = NULL;
	meta_set[0] = " ";
	meta_set[1] = ">";
	meta_set[2] = ">>";
	meta_set[3] = "<";
	meta_set[4] = "<<";
	meta_set[5] = "|";
	meta_set[6] = NULL;

	sep = ft_custom_split(line, semi);
	tree = NULL;
	while (sep)
	{
		ft_lstadd_back(&tree, ft_lstnew(ft_custom_split(sep->content, meta_set)));
		sep = sep->next;
	}
	ft_display_tree(tree);
	return (tree);
}
