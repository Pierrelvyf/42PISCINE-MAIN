#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab[i])
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
/*
int	main()
{
	int     tab[4] = { 9, 2, 8, 1 };
	ft_sort_int_tab(tab, 4);

	int     i;

        i = 0;
        while(i < 4)
        {
                printf("TEST: %d", tab[i]);
                i++;
        }

	return (0);
}*/
