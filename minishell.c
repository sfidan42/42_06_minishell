/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadettin <sadettin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:40:14 by muerdoga          #+#    #+#             */
/*   Updated: 2023/03/13 01:33:41 by sadettin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**ft_cpy_env(char **env)
{
	int		i;
	int		len;
	char	**cpy;

	len = 0;
	while (env[len])
		len++;
	cpy = malloc(sizeof(char *) * len + 1);
	i = 0;
	while (*env)
		cpy[i++] = ft_strdup(*env++);
	cpy[i] = NULL;
	return (cpy);
}

void	ft_minishell(char *line, char **envp)
{
	(void)envp;
	t_list	*tree;
	while (42)
	{
		line = readline("\033[1;32m🔥minishell $>\033[0;37m");
		if (!line)
		{
			printf("Exiting minishell...\n");
			break ;
		}
		if (*line)
		{
			add_history(line);
			rl_replace_line("", 0);
			rl_redisplay();
		}
		ft_syntax_check(line);
		tree = ft_lexer(line);
		ft_display_lexer(tree);
		tree = ft_parser(tree);
		ft_display_parser(tree);
		tree = ft_expander(tree);
		//ft_executor(tree, envp);
		free(tree);
		free(line);
	}
}

void	ft_sig_handler(int sig)
{
	if (sig == SIGINT)
	{
		rl_replace_line("", 0);
		printf("\n");
		rl_on_new_line();
		rl_redisplay();
	}
}

int	main(int argc, char **argv, char **env)
{
	char	*line;

	line = NULL;
	if (argc != 1)
	{
		printf("What am I supposed to do with \"%s, ...\"??\n", argv[1]);
		return (EXIT_FAILURE);
	}
	signal(SIGQUIT, ft_sig_handler);
	signal(SIGINT, ft_sig_handler);
	ft_intro();
	ft_minishell(line, ft_cpy_env(env));
	return (EXIT_SUCCESS);
}
