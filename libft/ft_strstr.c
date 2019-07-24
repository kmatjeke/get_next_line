/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:11:50 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/21 14:57:29 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int pos;
	int j;

	pos = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[pos] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[pos + j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)haystack + pos);
			j++;
		}
		pos++;
	}
	return (0);
}
