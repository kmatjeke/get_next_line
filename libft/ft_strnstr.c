/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:12:08 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/21 17:42:40 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	j;

	pos = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[pos] != '\0' && pos < len)
	{
		j = 0;
		while (needle[j] == haystack[pos + j] && (pos + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char*)haystack + pos);
			j++;
		}
		pos++;
	}
	return (0);
}
