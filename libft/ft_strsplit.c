/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:03:06 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/10 09:32:09 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_cpy(char *dst, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static size_t	ft_countwords(const char *str, int c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (!str[i])
			break ;
		count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_cutwords(const char *str, size_t words, char **r, char c)
{
	size_t	wrds;
	size_t	start;
	size_t	end;

	wrds = 0;
	start = 0;
	while (wrds < words && str[start])
	{
		while (str[start] == c)
			start++;
		end = start;
		while (str[end] && str[end] != c)
			end++;
		if (!(r[wrds] = malloc(end - start + 1)))
			return (0);
		ft_cpy(r[wrds], (char *)str + start, end - start);
		start = end + 1;
		wrds++;
	}
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**str;
	size_t		i;

	if (!s)
		return (NULL);
	i = ft_countwords(s, c);
	if (!i)
	{
		if (!(str = malloc(sizeof(*str))))
			return (NULL);
		str[0] = NULL;
		return (str);
	}
	if (!(str = malloc((i + 1) * sizeof(*str))))
		return (NULL);
	if (!(ft_cutwords(s, i, str, c)))
		return (NULL);
	str[i] = 0;
	return (str);
}
