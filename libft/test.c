#include <string.h>
#include <stdio.h>

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*tmp1;
	const char	*tmp2;
	size_t		i;
	size_t		tmp1l;

	tmp1 = dst;
	tmp2 = src;
	i = size;
	while (i-- != 0 && *tmp1 != '\0')
		tmp1++;
	tmp1l = tmp1 - dst;
	i = size - tmp1l;
	if (i == 0)
		return (tmp1l + strlen(tmp2));
	while (*tmp2 != '\0')
	{
		if (i != 1)
		{
			*tmp1++ = *tmp2;
			i--;
		}
		tmp2++;
	}
	*tmp1 = '\0';
	return (tmp1l + (tmp2 - src));
}

int	main()
{
	char *s1;
	char *s2;
	size_t i;

	s1 = "1234";
	s2 = "12345";
	i = 6;
	printf("size s1 = %lu\n", strlen(s1));
	printf("size s2 = %lu\n", strlen(s2));
	printf("size = %lu\n", strlcat(s1, s2, i));
	return(0);
}
