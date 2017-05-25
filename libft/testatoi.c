#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int pn;
	int value;

	i = 0;
	pn = 1;
	value = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 )
		i++;
	if (str[i] != '-' && str[i] != '+' && str[i] < '0' && str[i] > '9')
		return (0);
	else
	{
		if (str[i] == '-')
		{
			if (str[i + 1] < '0' && str[i + 1] > '9')
				return (0);
			pn *= -1;
			i++;
		}
		if (str[i] == '+')
		{
			if (str[i + 1] < '0' && str[i + 1] > '9')
				return (0);
			pn *= 1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			value = 10 * value + str[i] - '0';
			i++;
		}
		value *= pn;
	}
	return (value);
}

int	main()
{
	char *s;
	
	s = "+3030010salut";
	printf("%d\n", ft_atoi(s));
	printf("%d", 's');
	return (0);
}
