#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size)
	{
		while (i < (size - 1) && len && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len);
}

int	main()
{
	char dest[50];
	char src[] = "SALUT les kheys";

	printf("src : %s ", src);
	printf("string.h: %ld\n", strlcpy(dest, src, 0));
	//printf("size src: %d\n", ft_strlcpy(dest, src, 5));
	printf("dest : %s", dest);
	//printf("deste : %s ", deste); 
}
