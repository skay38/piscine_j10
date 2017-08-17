#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));

void	ft_showtab(int *tab, int len)
{
	int i;

	i = 0;
	while (i<len)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

int		test(int i)
{
	return (2 * i);
}

int	main(void)
{
	int tab[4];

	tab[0] = 5;
	tab[1] = 3;
	tab[2] = 20;
	tab[3] = -10;
	ft_showtab(ft_map(tab, 4, &test), 4);
	return (0);
}