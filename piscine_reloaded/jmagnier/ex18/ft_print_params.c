void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int i;
	int a;

	i = 1;

	while (i < argc)
	{	a = 0;
		while (argv[i][a])
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
