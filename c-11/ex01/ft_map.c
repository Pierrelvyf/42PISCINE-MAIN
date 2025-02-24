#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	new_tab = malloc(sizeof(int) * length);
	if (!new_tab)
		return (0);
	i = 0;
	while (i < length)
	{
		new_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	
	return (0);
}*/
