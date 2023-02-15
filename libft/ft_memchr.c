/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:17:29 by sfidan            #+#    #+#             */
/*   Updated: 2022/07/31 11:58:17 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*search;
	size_t			i;

	search = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == search[i])
			return (search + i);
		i++;
	}
	return (0);
}
