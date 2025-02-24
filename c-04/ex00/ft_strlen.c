//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main()
{
	char	text[] = "Salut kehys";

	printf("OUTPUT: %d\n", ft_strlen(text));

	return (0);
}*/
