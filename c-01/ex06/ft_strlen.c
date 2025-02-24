int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
int	main()
{
	char	*a;

	a = "CECI";
	printf("TEST: %d",ft_strlen(a));
	return (0);
}*/
