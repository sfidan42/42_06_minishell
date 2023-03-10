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

t_list	*ft_parse(t_list *branch, char *meta_set)
{
	char	*str;
	t_list	*new;
	t_list	*aux;

	aux = new;
	new = malloc(sizeof(t_parse));	
	while (branch)
	{
		str = (char *)branch->content;
		if (*str == '>')
			if ()
		if (*str == '|')
			ft_lstadd_back(&aux, malloc(sizeof(t_parse)));
		branch = branch->next;
	}
	return (new);
}

t_list	*ft_parser(t_list *tree)
{
	t_list	*aux;
	t_list	*branch;
	
	aux = tree;
	while (aux)
	{
		aux->content = ft_parse((t_list *)aux->content)		
		aux = aux->next;
	}
	ft_display_tree(tree);
	return (tree);
}
