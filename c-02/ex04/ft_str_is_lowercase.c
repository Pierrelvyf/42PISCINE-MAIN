#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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

	text = "aaajaji";
	printf("OUTPUT: %d", ft_str_is_lowercase(text));
	return (0);
}*/
