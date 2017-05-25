#include <libft.h>

char	ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *str;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	str = (char *)malloc(sizeof(*str) * i + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	return (str);
}
