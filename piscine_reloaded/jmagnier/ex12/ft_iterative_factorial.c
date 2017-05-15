int	ft_iterative_factorial(int nb)
{	
	int fact;

	fact = nb;

	if (nb < 0)
		return (0);
	
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{	
		while (--nb >= 1)
		{
			fact *= (nb);
		}
		return (fact);
	}
}
