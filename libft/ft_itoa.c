/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:34:49 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/05 11:14:00 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	if (n < 0)
		n = n * -1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			j;

	j = ft_len(n);
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0 || j == 0)
		j++;
	if (!(str = ft_strnew(j)))
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
		i++;
	}
	while (i < j--)
	{
		str[j] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}
