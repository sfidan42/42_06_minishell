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

	sep = ft_custom_split(line, ";");
	tree = NULL;
	while (sep)
	{
		ft_lstadd_back(&tree, ft_lstnew(ft_custom_split(sep->content, "\t >|<")));
		sep = sep->next;
	}
	ft_display_lexer(tree);
	return (tree);
}
