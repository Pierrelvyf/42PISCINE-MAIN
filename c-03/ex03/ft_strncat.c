#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int     main()
{
	char    text1[] = "SALUTWSH";
	char    text2[] = "TEST";

	//strncat(text1, text2, 2);
	ft_strncat(text1, text2, 2);
	printf("OUTPUT: %s\n", text1);
	//printf("OUTPUT: %s\n", text3);
	return (0);
}
