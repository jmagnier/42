#include <string.h>
#include <unistd.h>

void	putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &(s[i]), 1);
		i++;
	}
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		k = i;
		if (haystack[k] == needle[j] && haystack[k] && needle[j])
		{
			while (haystack[k] == needle[j] && haystack[k] && needle [j])
			{
				k++;
				j++;
			}
			if (needle[j] == '\0')
				return (*(char*)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
        int i;
        int j;
        int k;

        i = 0;
        while (haystack[i] && i < len)
        {
                j = 0;
                k = i;
                if (haystack[k] == needle[j] && haystack[k] && needle[j])
                {
                        while (haystack[k] == needle[j] && haystack[k] && needle [j])
                        {
                                k++;
                                j++;
                        }
                        if (needle[j] == '\0')
                                return (char*)(haystack + i);
                }
                i++;
        }
        return (NULL);
}

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	int a;

	a = 5;
	s1 = "salut les gens";
	s2 = "les";
	s3 = ft_strstr(s1, s2);
	putstr(s3);
//	putstr(s1);
	return(0);
}
