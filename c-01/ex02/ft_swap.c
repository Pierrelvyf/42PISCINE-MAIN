#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	nbtemp;

	nbtemp = *b;
	*b = *a;
	*a = nbtemp;
}
/*
int	main()
{
	int	nbr1;
	int	nbr2;

	nbr1 = 42;
	nbr2 = 24;
	printf("AVANT: nbr1 = %d, nbr2 = %d", nbr1, nbr2);
	ft_swap(&nbr1, &nbr2);
	printf("APRES: nbr1 = %d, nbr2 = %d", nbr1, nbr2);
	return (0);
}*/
