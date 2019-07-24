/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 15:44:40 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/18 15:49:51 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int	ret;

	if (s1 && s2)
	{
		i = 0;
		while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
			i++;
		ret = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (ret == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
