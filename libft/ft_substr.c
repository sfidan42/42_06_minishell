/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:25:51 by sfidan            #+#    #+#             */
/*   Updated: 2022/07/26 13:07:15 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (!s)
		return (0);
	i = ft_strlen(s);
	if (i < len)
		len = i;
	if (start >= i)
		return (ft_strdup(""));
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (0);
	i = 0;
	while (len--)
		arr[i++] = s[start++];
	arr[i] = 0;
	return (arr);
}
