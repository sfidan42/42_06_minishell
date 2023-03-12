/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadettin <sadettin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:52:45 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/13 00:01:52 by sadettin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

t_list	*ft_parser(t_list *tree)
{
	t_list	*aux;

	aux = tree;
	while (aux)
	{
		//aux->content = ft_parsed((char **)aux->content);
		aux = aux->next;
	}
	return (tree);
}
