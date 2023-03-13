/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lexer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadettin <sadettin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:15:02 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/13 23:51:20 by sadettin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

t_list	*ft_lexer(char *line)
{
	char	**str;
	t_list	*tree;
	t_list	*sep;

	sep = ft_custom_split(line, ";");
	tree = NULL;
	while (sep)
	{
		str = ft_lst_to_str(ft_custom_split(sep->content, "\t >|<"));
		ft_lstadd_back(&tree, ft_lstnew(str));
		sep = sep->next;
	}
	return (tree);
}
