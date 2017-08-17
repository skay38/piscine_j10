#include <stdlib.h>
#include <stdio.h>

void	ft_sort_wordtab(char tab[5][5]);

int		ft_strlen(char *str);

int		ft_strlen_2(char argv[5][5]);

void	ft_showtab(char tab[5][5], int len)
{
	int i;

	i = 0;
	while (i<len)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

int	main(void)
{
	char tab[5][5]={"abcd", "bcde", "1234", "ABCD"};
	ft_showtab(tab, ft_strlen_2(tab));
	printf("\n");
	ft_sort_wordtab(tab);
	ft_showtab(tab, ft_strlen_2(tab));
	return (0);
}