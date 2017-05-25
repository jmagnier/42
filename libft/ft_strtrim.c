#include <libft.h>

char	*ft_strtrim(char const *s)
{
	char *str;
	int len;
	int pre;
	int suf;
	int i;
	
	len = ft_strlen(s);
	pre = 0;
	suf = 0;
	while (s[pre] && (s[pre] == ' ' || s[pre] == '\t' || s[pre] == '\n'))
		pre++;
	while (s[(len - suf - 1)] == ' ' || s[(len - suf - 1)] == '\n' || s[(len - suf - 1)] == '\t')
		suf++;
	len -= pre + suf;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[pre];
		pre++;
		i++;
	}
	return (str);	
}
