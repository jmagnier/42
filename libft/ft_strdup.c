#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int i;
	char *s2;

	i = 0;
	while (s1[i])
		i++;
	s2 = (char*)malloc(sizeof(*s2)	* (i + 1));
	if (!s2)
		return(NULL);
	s2[i + 1] = '\0';
	i = 0;
	while (s2[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
