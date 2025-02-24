//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (nb);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_fibonacci(5));
	return (0);
}*/
