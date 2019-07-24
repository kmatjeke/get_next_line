/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:17:09 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/24 13:02:36 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	source;
	size_t	i;

	dest = 0;
	while (dst[dest] != '\0')
		dest++;
	source = 0;
	while (src[source] != '\0')
		source++;
	if (dstsize <= dest)
		source += dstsize;
	else
		source += dest;
	i = 0;
	while ((src[i] != '\0') && dest + 1 < dstsize)
	{
		dst[dest] = src[i];
		dest++;
		i++;
	}
	dst[dest] = '\0';
	return (source);
}
