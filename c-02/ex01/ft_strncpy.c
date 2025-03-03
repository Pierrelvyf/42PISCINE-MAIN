#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[5];
	char	src[5] = "SALU";
	
	ft_strncpy(dest, src, 10);
	
	printf("SRC: %s", src);
	printf("DEST: %s", dest);

	return 0;
	
}*/
