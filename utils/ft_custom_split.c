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

void	f(void *content)
{
	printf("%s\n", (char *)content);
}

t_list	*ft_custom_split(char *line, char *set)
{
	int		flag;
	int		i;
	char	*sub;
	t_list	*ans;
	t_list	*indexes;

	indexes = ft_lstnew(line);
	flag = 0;
	while (*line)
	{
		if (flag == 0 && *line == '\'' && *(line - 1) != '\\')
			flag = 1;
		else if (flag == 0 && *line == '\"' && *(line - 1) != '\\')
			flag = 2;
		else if (flag == 2 && *line == '\"' && *(line - 1) != '\\')
			flag = 0;
		else if (flag == 1 && *line == '\'' && *(line - 1) != '\\')
			flag = 0;
		if (flag == 0)
		{
			i = 0;
			while (set[i])
			{
				if (*line == set[i] && *(line - 1) != '\\')
				{
					ft_lstadd_back(&indexes, ft_lstnew(line));
					while (*line == set[i])
						line++;
					ft_lstadd_back(&indexes, ft_lstnew(line--));
				}
				i++;
			}
		}
		line++;
	}
	ft_lstadd_back(&indexes, ft_lstnew(line));
	//ft_lstiter(indexes, f);
	ans = NULL;
	while (indexes->next)
	{
		if (indexes->next->content - indexes->content && *(char *)indexes->content != ' ')
		{
			sub = ft_substr(indexes->content, 0, indexes->next->content - indexes->content);
			ft_lstadd_back(&ans, ft_lstnew(sub));
		}	
		indexes = indexes->next;
	}
	free(indexes);
	return (ans);
}
