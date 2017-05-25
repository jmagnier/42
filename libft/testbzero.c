#include<stdlib.h>
#include<stdio.h>
 
void	*ft_memset(void *b, int c, size_t len)

{
	unsigned char *p_b;

	p_b = b;

	while (len--)
	{
		*p_b++ = c;
	}
	return (b);
}
 
void bzero(void* s, size_t n) 
{
	size_t pos;
	pos = 0;

	while (n--)
		((char*)s)[pos] = '\0';
}
 
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
int main() {
    int i_array[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    short s_array[12] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    size_t pos = 0;
 
    bzero(i_array, (6 * sizeof(int)));
    //bzero(s_array, (10 * sizeof(short)));
    ft_bzero(s_array, (10 * sizeof(short)));
    //ft_bzero(i_array, (6 * sizeof(int)));
 
    for(; pos < 10; pos++) {
        printf("%lu: %d\n", (pos + 1), i_array[pos]);
    }
 
    for(pos = 0; pos < 12; pos++) {
        printf("%lu: %d\n", (pos + 1), s_array[pos]);
    }
 
    return 0;
}
