#include <stdio.h>
#include <string.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        int i;

        i = 0;
        while (s1[i] && s1[i] == s2[i] && i < n - 1)
                i++;
	if (n)
        	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	return (0);
}

int	main()
{
	char *s1 = "salut";
	char *s2 = "salpe";
	printf("%d", ft_strncmp(s1, s2, 0));
	printf("%d", strncmp(s1, s2, 0));
	return(0);
}
