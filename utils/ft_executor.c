/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_executor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:48:52 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/08 16:49:20 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"



void	ft_executor(t_list *tree, char **env)
{
	t_list	*branch;
	char	buf[BUFFER_SIZE];
	int		fd[2];

	(void)env;
	while (tree)
	{
		pipe(fd);
		branch = (t_list *)tree->content;
		while (branch)
		{
			
			branch = branch->next;
		}
		read(fd[0], buf, 5);
		write(1, buf, ft_strlen(buf));
		tree = tree->next;
	}	
}
