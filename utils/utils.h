/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadettin <sadettin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:54:44 by sfidan            #+#    #+#             */
/*   Updated: 2023/03/12 23:32:46 by sadettin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "lexer/lexer.h"
# include "parser/parser.h"
# include "expander/expander.h"
# include "executor/executor.h"
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>

void	ft_intro(void);
void	ft_syntax_check(char *line);
void	ft_display_tree(t_list *tree);

#endif
