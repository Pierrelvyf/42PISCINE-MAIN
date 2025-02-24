#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 2;
	printf("AVANT: a = %d, b = %d, div = %d, mod = %d", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("APRES: a = %d, b = %d, div = %d, mod = %d", a, b, div, mod);
	return (0);
}*/
