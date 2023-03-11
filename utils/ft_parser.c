/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:52:45 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/07 16:23:10 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_list	*ft_parser(t_list *tree)
{
	t_list	*aux;
	char	**new;
	t_list	*new_branch;
	t_list	*branch;
	char	**args;
	int		i;
	int		len;

	(void)args;
	aux = tree;
	while (aux)
	{
		new_branch = NULL;
		branch = (t_list *)aux->content;
		while (branch)
		{
			len = ft_lstfind(branch, "|");
			new = malloc(sizeof(char *) * (len + 1));
			i = 0;
			while (i < len)
			{
				new[i] = (char *)branch->content;
				branch = branch->next;
				i++;
			}
			new[i] = NULL;
			ft_lstadd_back(&new_branch, ft_lstnew(new));
			branch = branch->next;
		}
		aux->content = new_branch;
		aux = aux->next;
	}
	ft_display_parser(tree);
	return (tree);
}
