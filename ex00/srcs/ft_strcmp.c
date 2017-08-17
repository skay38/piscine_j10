/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:38:54 by hdurieu           #+#    #+#             */
/*   Updated: 2017/08/10 15:25:09 by hdurieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
			i++;
	}
	if (ft_strlen(s1) == ft_strlen(s2))
		return (0);
	else if (s1[i] == '\0' && s2[i] != '\0')
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}
