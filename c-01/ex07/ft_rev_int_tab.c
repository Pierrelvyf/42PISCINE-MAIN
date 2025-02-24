//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[(size - 1) - i];
		tab[(size - 1) - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
/*
int	main()
{
	int	tab[4] = { 25, 50, 75, 100 };
	ft_rev_int_tab(tab, 4);

	int	i;

	i = 0;
	while(i < 4)
	{
		printf("TEST: %d", tab[i]);
		i++;
	}
	return(0);
}*/
