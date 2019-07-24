/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:36:30 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/05 10:01:20 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	min;
	size_t	max;
	size_t	len;

	if (s)
	{
		min = 0;
		max = ft_strlen((char *)s);
		while (s[min] != '\0' && (s[min] == ' ' || s[min] == '\n'
					|| s[min] == '\t'))
			min++;
		while (min < max && (s[max - 1] == ' '
					|| s[max - 1] == '\n' || s[max - 1] == '\t'))
			max--;
		if (min == max)
			return (ft_strnew(1));
		len = max - min;
		return (ft_strsub(s, min, len));
	}
	return (0);
}
