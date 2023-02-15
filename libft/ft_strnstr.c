/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:37:32 by sfidan            #+#    #+#             */
/*   Updated: 2022/07/25 13:17:19 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ndl[0])
		return ((char *)hay);
	i = 0;
	while (hay[i])
	{
		j = 0;
		while (ndl[j] == hay[i + j] && ndl[j] && i + j < len)
			j++;
		if (!ndl[j])
			return ((char *)hay + i);
		i++;
	}
	return (0);
}
