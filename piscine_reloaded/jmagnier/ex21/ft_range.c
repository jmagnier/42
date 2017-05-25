#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int len;
	int i;
	int *tab;

	len = max - min;
	i = 0;
	if (len <= 0)
		return (0);
	else
	{
		tab = (int*)malloc(sizeof(*tab) * len);

		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}			
}
