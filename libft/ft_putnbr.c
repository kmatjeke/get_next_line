/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:39:21 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/23 13:10:07 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	nb;
	char	str[10];
	int		i;

	i = 0;
	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}
