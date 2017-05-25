void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int tabn, char **tabstr)
{
	int n;
	int cmpt;
	char *swap;

	cmpt = 1;
	while (cmpt)
	{
		n = 1;
		cmpt = 0;
		while (n < tabn - 1)
		{
			if (ft_strcmp(tabstr[n], tabstr[n + 1]) > 0)
			{
				swap = tabstr[n];
				tabstr[n] = tabstr[n + 1];
				tabstr[n + 1] = swap;
				cmpt++;
			}
			n++;
		}
	}
	cmpt = 1;

	while (cmpt < tabn)
	{	n = 0;
		while (tabstr[cmpt][n])
		{
			ft_putchar(tabstr[cmpt][n]);
			n++;
		}
		ft_putchar('\n');
		cmpt++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);	
}
