/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syntax_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:37:40 by muerdoga          #+#    #+#             */
/*   Updated: 2023/03/07 09:54:42 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_check_quotes(char *line)
{
	int	flag;
	int	i;

	flag = 0;
	i = 0;
	while (line[i])
	{
		if (flag == 0 && line[i] == '\'' && !ft_is_bckslh(line, i))
			flag = 1;
		else if (flag == 0 && line[i] == '\"' && !ft_is_bckslh(line, i))
			flag = 2;
		else if (flag == 2 && line[i] == '\"' && !ft_is_bckslh(line, i))
			flag = 0;
		else if (flag == 1 && line[i] == '\'' && !ft_is_bckslh(line, i))
			flag = 0;
		i++;
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
