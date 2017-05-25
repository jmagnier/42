#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	if (!s)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
