/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:54:44 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/07 09:55:35 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "../bin/bin.h"

enum	e_characters
{
	GTGT,
	STST,
	GT,
	ST,
};

typedef struct s_custom_split_vars
{
	int	flag;
	int	i;
	int	j;
}		t_custom_split_vars;

// main utils
void	ft_intro(void);
void	ft_syntax_check(char *line);
t_list	*ft_lexer(char *line);
t_list	*ft_parser(t_list *lst);
void	ft_expander(void);
void	ft_executor(char **execute, char **argw);

// helper utils
t_list	*ft_custom_split(char *line, char c);
int		ft_is_bckslh(char *line, int i);
#endif
