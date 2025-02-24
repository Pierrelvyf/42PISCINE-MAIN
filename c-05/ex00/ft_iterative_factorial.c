//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 1)
		return (!nb);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf ("OUTPUT: %d\n", ft_iterative_factorial(5));
	return (0);
}*/
