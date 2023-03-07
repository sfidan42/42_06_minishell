/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:40:14 by muerdoga          #+#    #+#             */
/*   Updated: 2023/03/01 19:43:40 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

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

void	ft_minishell(char *line, char *prompt)
{
	t_list	*tree;

	while (42)
	{
		line = readline(prompt);
		{
			add_history(line);
			rl_replace_line("", 0);
			rl_redisplay();
		}
		if (!line)
		{
			printf("Exiting minishell...\n");
			break ;
		}
		ft_syntax_check(line);
		tree = ft_lexer(line);
		free(line);
	}
}

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

int	main(int argc, char **argv, char **env)
{
	char	*line;
	char	**cpy_env;

	line = NULL;
	signal(SIGQUIT, ft_sig_handler);
	signal(SIGINT, ft_sig_handler);
	if (argc != 1)
	{
		printf("What am I supposed to do withclear \"%s, ...\"??\n", argv[1]);
		return (EXIT_FAILURE);
	}
	ft_intro();
	cpy_env = ft_cpy_env(env);
	ft_minishell(line, "\033[1;32m🔥minishell $>\033[0;37m");
	return (EXIT_SUCCESS);
}
