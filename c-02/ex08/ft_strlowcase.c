//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int     main()
{
        char    text[10] = "TsheYofuYu";
        printf("AVANT: %s", text);
        ft_strlowcase(text);
        printf("APRES: %s", text);
}*/
