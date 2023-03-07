/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lexer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:15:02 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/07 09:52:44 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_list	*ft_lexer(char *line)
{
	t_list	*tree;
	t_list	*sep;
	void	*to_free;

	tree = NULL;
	sep = ft_custom_split(line, ';');
	to_free = sep;
	while (sep)
	{
		ft_lstadd_back(&tree, ft_lstnew(ft_custom_split(sep->content, '|')));
		sep = sep->next;
	}
	return (tree);
}
