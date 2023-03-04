/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:33:34 by sfidan            #+#    #+#             */
/*   Updated: 2022/07/26 14:40:10 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wc(char const *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			wc++;
		while (s[i] != c && s[i])
			i++;
	}
	return (wc);
}

size_t	ft_wl(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	ft_ww(char **list, char const *s, size_t wc, char c)
{
	size_t	i;
	size_t	j;
	size_t	w_i;
	size_t	wl;

	i = 0;
	w_i = 0;
	while (w_i < wc)
	{
		while (s[i] == c)
			i++;
		wl = ft_wl(s + i, c);
		list[w_i] = (char *)malloc(wl + 1);
		j = 0;
		while (j < wl)
			list[w_i][j++] = s[i++];
		list[w_i][j] = 0;
		w_i++;
	}
	list[w_i] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**list;

	if (!s)
		return (0);
	wc = ft_wc(s, c);
	list = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!list)
		return (0);
	ft_ww(list, s, wc, c);
	return (list);
}
