/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 18:55:28 by hdurieu           #+#    #+#             */
/*   Updated: 2017/08/06 18:55:32 by hdurieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int i)
{
	if (i < 0)
	{
		if (i == -2147483648)
		{
			ft_putnbr(-214748364);
			ft_putchar((char)8 + 48);
		}
		else
		{
			ft_putchar((char)45);
			ft_putnbr(-i);
		}
	}
	else
	{
		if ((i % 10) == i)
		{
			ft_putchar((char)i + 48);
		}
		else
		{
			ft_putnbr(i / 10);
			ft_putchar((char)(i % 10) + 48);
		}
	}
}
