/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:31:24 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/05/30 11:17:30 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;
	char	*a;
	char	*b;

	if (s1 && s2)
	{
		if (!(str = (char *)malloc((ft_strlen((char *)s1) +
			(ft_strlen((char *)s2) + 1)))))
			return (NULL);
		a = (char *)s1;
		b = (char *)s2;
		i = 0;
		while (*a)
			str[i++] = *(a++);
		while (*b)
			str[i++] = *(b++);
		str[i] = '\0';
		return (str);
	}
	return (0);
}
