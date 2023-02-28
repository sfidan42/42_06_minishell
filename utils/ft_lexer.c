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
	char	**xxxx;

	xxxx = (char **)content;
	i = 0;
	while (xxxx[i])
		printf("___%s___", xxxx[i++]);
	printf("\n");
}

t_list	*ft_lexer(char *line)
{
	t_list	*tree;
	void	*to_free;
	char	**sep;

	to_free = (sep = ft_split(line, ';'));
	while (*sep)
		ft_lstadd_back(&tree, ft_lstnew(ft_split(*sep++, '|')));
	free(to_free);
	ft_lstiter(tree, ft_print_content);
	return (tree);
}
