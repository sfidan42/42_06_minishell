/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadettin <sadettin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:52:45 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/12 22:52:39 by sadettin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_list	*ft_parser(t_list *tree)
{
	t_list	*aux;
	void	*to_free;

	aux = tree;
	while (aux)
	{
		to_free = aux->content;
		aux->content = ft_list_to_str((t_list *)aux->content);
		free(to_free);
		aux = aux->next;
	}
	ft_display_parser(tree);
	return (tree);
}
