#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, size_t n)
{
	int idst;
	int isrc;

	idst = 0;
	isrc = 0;
	while (dest[idst])
		idst++;
	while (src[isrc] && isrc < n)
	{
		dest[idst] = src[isrc];
		idst++;
		isrc++;
	}
	dest[idst] = '\0';
	return (dest);
}

char	*ft_strcat2(char *s1, const char *s2)
{
	int			i;
	int			j;

	i = -1;
	j = 0;
	while (s1[i])
		i++;
	while (*(s2 + ++i))
		*(s1 + j++) = *(s2 + i);
	*(s1 + j) = '\0';
	return (s1);
}

char	*ft_strcat(char *dest, char *src)
{
	int idst;
	int isrc;

	idst = 0;
	isrc = 0;
	while (dest[idst])
		idst++;
	while (src[isrc])
	{
		dest[idst] = src[isrc];
		idst++;
		isrc++;
	}
	dest[idst] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}	
}

int	main()
{
	char *s1;
	char *s2;
	char *s3;

	s1 = strdup("salut");
	s2 = strdup("les gens");
	s3 = ft_strncat(s1, s2, 3);
	ft_putstr(s3);
	return (0);
}
