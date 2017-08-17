/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 17:52:15 by hdurieu           #+#    #+#             */
/*   Updated: 2017/08/17 17:52:17 by hdurieu          ###   ########.fr       */
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

int		ft_strlen_2(char **argv)
{
	int i;
	int	c;

	c = 1;
	i = 0;
	while (argv[c] != '\0')
	{
		i = i + ft_strlen(argv[c]) + 1;
		c++;
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
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
			i++;
	}
	if (ft_strlen(s1) == ft_strlen(s2))
		return (0);
	else if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else
		return (1);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*temp;

	i = 0;
	while (i < ft_strlen2(tab) - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) == 1)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}