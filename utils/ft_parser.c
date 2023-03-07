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

int	ft_type(char *line)
{
	while (*line)
	{
		if (*line == '>')
			if (*(line + 1) == '>')
				return (DOUBLEGREAT);
			else
				return (GREAT);
		else if (*line == '<')
			return (LESS);
		line++;
	}
	return (WORD);
}

t_list	*ft_parser(t_list *tree)
{
	t_list	*branch;
	t_list	*aux;
	
	aux = tree;
	while (aux)
	{
		branch = (t_list *)aux->content;
		while(branch)
		{
			branch->type = ft_type((char *)branch->content);
			branch = branch->next;
		}	
		aux = aux->next;
	}
	//ft_display_tree(tree);
	return (tree);
}
