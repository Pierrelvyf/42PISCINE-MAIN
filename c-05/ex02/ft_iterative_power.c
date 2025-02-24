//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 1)
		return (!power);
	result = nb;
	while (--power)
		result *= nb;
	return (result);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_iterative_power(-5, 0));
	//printf("T: %d\n", !0);
	return (0);
}*/
