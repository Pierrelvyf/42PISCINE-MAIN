//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char	*text;

	text = "5a89";
	printf("OUTPUT: %d", ft_str_is_numeric(text));
	return (0);
}*/
