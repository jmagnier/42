#include <libft.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *p_dst;
	const char *p_src;

	*p_dst = dst;
	*p_src = src;

	while (n--)
	{	
		*p_dst++ = *p_src++;	
	}

	return (dst);
}
