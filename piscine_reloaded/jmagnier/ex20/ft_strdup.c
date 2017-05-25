#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int len;
	int i;

	char *dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(*dest) * (len + 1));
	
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
