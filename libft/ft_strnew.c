#include <libft.h>

char	*ft_strnew(size_t size)
{
	int i;
	char *str;

	i = 0;
	str = (char *)malloc(sizeof(*str) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
