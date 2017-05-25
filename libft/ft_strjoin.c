#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t i;
	size_t j;
	size_t len;
	
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	len = 0;
	while (s1[i])
	{
		str[len] = s1[i];
		len++;
		i++;
	}
	while (s2[j])
	{
		str[len] = s2[j];
		len++;
		j++;
	}
	return (str);
}
