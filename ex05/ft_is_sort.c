/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:02:01 by hdurieu           #+#    #+#             */
/*   Updated: 2017/08/17 16:02:05 by hdurieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int c;

	i = 0;
	c = 0;
	if (length == 1 || length == 0 || length == 2)
		return (1);
	else
	{	
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0 && c > 0)
				return (0);
			else if (f(tab[i], tab[i + 1]) > 0 && c < 0)
				return (0);
			else if (c == 0)
				c = f(tab[i], tab[i + 1]);
			i++;
		}
		return (1);
	}
}
