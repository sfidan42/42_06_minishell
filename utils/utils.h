/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:54:44 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/08 16:23:50 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "../bin/bin.h"
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef struct s_parse
{
	int		fd_infile;
	int		fd_outfile;
	char	**argv;
}	t_parse;

// main utils
void	ft_intro(void);
t_list	*ft_lexer(char *line);
t_list	*ft_parser(t_list *tree);
t_list  *ft_expander(t_list *tree);
void	ft_executor(t_list *tree, char **env);

// helper utils
// General
t_list	*ft_custom_split(char *line, char *set);
int		ft_quote_backslash(char *line, int i);
void	ft_display_lexer(t_list *tree);
void	ft_display_parser(t_list *tree);
void	ft_syntax_check(char *line);

#endif
