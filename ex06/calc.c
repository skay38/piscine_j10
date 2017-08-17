/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:43:23 by hdurieu           #+#    #+#             */
/*   Updated: 2017/08/17 17:49:35 by hdurieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_echec(int i, int j, char *c)
{
	if (ft_strcmp(c, "/") == 0 && j == 0 && i != 0)
	{
		ft_putstr("Stop : division by zero");
		return (1);
	}
	if (ft_strcmp(c, "%") == 0 && j == 0 && i != 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (1);
	}
	else
		return (0);
}

int		ft_op(int (*tab[5])(int k, int l), int i, int j, char *op)
{
	if (ft_strcmp(op, "+") == 0)
		return (tab[0](i, j));
	else if (ft_strcmp(op, "-") == 0)
		return (tab[1](i, j));
	else if (ft_strcmp(op, "*") == 0)
		return (tab[2](i, j));
	else if (ft_strcmp(op, "/") == 0)
		return (tab[3](i, j));
	else if (ft_strcmp(op, "%") == 0)
		return (tab[4](i, j));
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int	(*tab[5])(int k, int l);

	tab[0] = &plus;
	tab[1] = &moins;
	tab[2] = &mult;
	tab[3] = &div;
	tab[4] = &modulo;
	if (argc != 4)
		return (0);
	else
	{
		i = ft_atoi(argv[1]);
		j = ft_atoi(argv[3]);
		if (ft_echec(i, j, argv[2]) == 1)
		{
			ft_putchar('\n');
			return (0);
		}
		ft_putnbr(ft_op(tab, i, j, argv[2]));
		ft_putchar('\n');
		return (0);
	}
}
