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

t_list	*ft_parse(t_list *branch)
{
	while (branch)
	{
		branch = branch->next;
	}
	return (branch);
}

t_list	*ft_parser(t_list *tree)
{
	t_list	*aux;

	aux = tree;
	while (aux)
	{
		//aux->content = ft_parse((t_list *)aux->content);
		aux = aux->next;
	}
	ft_display_tree(tree);
	return (tree);
}
