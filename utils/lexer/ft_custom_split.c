/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadettin <sadettin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:13:47 by muerdoga          #+#    #+#             */
/*   Updated: 2023/03/13 00:14:31 by sadettin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

void	f(void *content)
{
	printf("%s\n", (char *)content);
}

t_list	*ft_custom_split(char *line, char *set)
{
	int		flag;
	char	*s;
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
			s = set;
			while (*set)
			{
				if (*line == *set && *(line - 1) != '\\')
				{
					ft_lstadd_back(&indexes, ft_lstnew(line));
					while (*line == *set)
						line++;
					ft_lstadd_back(&indexes, ft_lstnew(line--));
				}
				set++;
			}
			set = s;
		}
		line++;
	}
	ft_lstadd_back(&indexes, ft_lstnew(line));
	//ft_lstiter(indexes, f);
	ans = NULL;
	while (indexes->next)
	{
		s = (char *)indexes->content;
		flag = 0;
		while ((void *)s != indexes->next->content)
			if (*s++ != ' ')
				{
					flag = 1;
					break;
				}
		if (flag)
		{
			s = ft_substr(indexes->content, 0, indexes->next->content - indexes->content);
			ft_lstadd_back(&ans, ft_lstnew(s));
		}	
		indexes = indexes->next;
	}
	free(indexes);
	return (ans);
}
