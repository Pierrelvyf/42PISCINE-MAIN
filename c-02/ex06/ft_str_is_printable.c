//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
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

	text = "\n";
	printf("OUTPUT: %d", ft_str_is_printable(text));
	return (0);
}*/
