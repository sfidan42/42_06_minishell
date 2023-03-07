/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:54:44 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/07 18:48:26 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "../bin/bin.h"
# define DOUBLEGREAT 1
# define GREAT 2
# define LESS 3
# define WORD 4

typedef struct s_custom_split_vars
{
	int	flag;
	int	i;
	int	j;
}		t_custom_split_vars;

// main utils
void	ft_intro(void);
t_list	*ft_lexer(char *line);
t_list	*ft_parser(t_list *tree);
void	ft_expander(void);
void	ft_executor(t_list *tree, char **env);

// helper utils
// General
t_list	*ft_custom_split(char *line, char c);
int		ft_is_bckslh(char *line, int i);
int		ft_quote_backslash(char *line, int i);
void	ft_display_tree(t_list *tree);
void	ft_syntax_check(char *line);

#endif
