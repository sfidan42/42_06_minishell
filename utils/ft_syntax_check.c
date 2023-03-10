/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syntax_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:37:40 by muerdoga          #+#    #+#             */
/*   Updated: 2023/03/07 17:22:41 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_check_quotes(char *line)
{
	int	flag;

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
		line++;
	}
	return (flag);
}

void	ft_syntax_check(char *line)
{
	if (ft_check_quotes(line))
	{
		printf("Error! Multiple lines are not allowed! 😩");
		exit(EXIT_FAILURE);
	}
}
