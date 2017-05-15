int ft_recursive_factorial(int nb)
{
	int = fact;

	fact = nb;
 
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1 || nb < 12)
	{ 
		fact *= ft_recursive(--nb);
		return (fact);
	}
	else
		return (0);
}
