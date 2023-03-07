/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:13:47 by muerdoga          #+#    #+#             */
/*   Updated: 2023/03/07 17:22:20 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_list	*ft_custom_split(char *line, char c)
{
	t_list				*ans;
	char 				*to_free;
	t_custom_split_vars	v;
	
	ans = __DARWIN_NULL;
	v = *(t_custom_split_vars *)ft_calloc(sizeof(t_custom_split_vars), 1);
	while (line[v.i])
	{
		if (v.flag == 0 && line[v.i] == '\'' && !ft_is_bckslh(line, v.i))
			v.flag = 1;
		else if (v.flag == 0 && line[v.i] == '\"' && !ft_is_bckslh(line, v.i))
			v.flag = 2;
		else if (v.flag == 2 && line[v.i] == '\"' && !ft_is_bckslh(line, v.i))
			v.flag = 0;
		else if (v.flag == 1 && line[v.i] == '\'' && !ft_is_bckslh(line, v.i))
			v.flag = 0;
		if (line[v.i] == c && v.flag == 0 && line[v.i - 1] != '\\')
		{
			to_free = ft_substr(line, v.j, v.i - v.j);
			ft_lstadd_back(&ans, ft_lstnew(ft_strtrim(to_free, " \t")));
			free(to_free);
			v.j = v.i + 1;
		}
		v.i++;
	}
	to_free = ft_substr(line, v.j, v.i - v.j);
	ft_lstadd_back(&ans, ft_lstnew(ft_strtrim(to_free, " \t")));
	free(to_free);
	return (ans);
}
