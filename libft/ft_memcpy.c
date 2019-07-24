/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:35:46 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/23 14:19:11 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n > 0)
	{
		*(str1++) = *(str2++);
		n--;
	}
	return (dst);
}
