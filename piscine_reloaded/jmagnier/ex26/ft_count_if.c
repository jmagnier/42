int	ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int value;

	i = 0;
	value = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			value++;
		i++;
	}
	return (value);
}
