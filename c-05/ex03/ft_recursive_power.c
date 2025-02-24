//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (!power);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_recursive_power(-5, 2));
	return (0);
}*/
