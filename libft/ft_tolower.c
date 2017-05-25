#include <libft.h>

int	ft_tolower(int c)
{
	int low;

	if (c >= 'A' && c <= 'Z')
	{
		low = c + ('a' - 'A');
		return (low);
	}
	else
		return (c);
}
