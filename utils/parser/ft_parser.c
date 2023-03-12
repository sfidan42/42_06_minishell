/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadettin <sadettin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:52:45 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/12 23:40:15 by sadettin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

t_list	*ft_parser(t_list *tree)
{
	t_list	*aux;
	char	**branch;

	aux = tree;
	while (aux)
	{
		branch = (char **)aux->content;
		(void)branch;
		aux = aux->next;
	}
	return (tree);
}
