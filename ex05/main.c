#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int		test(int i, int j)
{
	if (i < j)
		return (-1);
	else if (i > j)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int tab[4];

	tab[0] = 3;
	tab[1] = 5;
	tab[2] = 20;
	tab[3] = 20;
	printf("%d", ft_is_sort(tab, 3, &test));
	return (0);
}