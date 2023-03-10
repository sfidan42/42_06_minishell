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

void	ft_parse()
{
	while (branch)
	{	
		if (*(char *)branch->content == '|')
		branch = branch->next;
	}
}

t_list	*ft_parser(t_list *tree)
{
	t_list	*aux;
	t_list	*branch;
	
	aux = tree;
	while (aux)
	{
		branch = (t_list *)aux->content;
		
		aux = aux->next;
	}
	ft_display_tree(tree);
	return (tree);
}
