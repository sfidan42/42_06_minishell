/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_executor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:48:52 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/07 19:34:25 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
/*
◦ echo with option -n
◦ cd with only a relative or absolute path
◦ pwd with no options
◦ export with no options
◦ unset with no options
◦ env with no options or arguments
◦ exit with no options
*/

void	ft_fork(char *exec)
{
	pid_t	pid;
	
	pid = fork();
	if (pid < 0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		char **args = ft_split(exec, ' ');
		execvp(args[0], args);
		perror(args[0]);
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}


void	ft_executor(t_list *tree, char **env)
{
	t_list	*branch;
	char	**args;

	(void)env;
	while (tree)
	{
		branch = (t_list *)tree->content;
		while (branch)
		{
			args = ft_split(branch->content, ' ');
			ft_fork(branch->content);
			branch = branch->next;
		}
		tree = tree->next;
	}
}
