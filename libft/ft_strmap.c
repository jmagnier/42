#include <libft.h>

char	ft_strmap(const char *s, char (*f)(char))
{
	int i;
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
			str[i] = f(s[i]);
			i++;
		}
	}
	return (str);
}
