//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	text[10] = "TsheYofuYu";
	printf("AVANT: %s", text);	
	ft_strupcase(text);
	printf("APRES: %s", text);
}*/
