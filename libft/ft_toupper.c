#include <libft.h>

int	ft_toupper(int c)
{
	int up;

	if (c >= 'a' && c <= 'z')
	{
		up = c - ('a' - 'A');
		return (up);
	}
	else
		return (c);
}
