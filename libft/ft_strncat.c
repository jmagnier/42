char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int idst;
	int isrc;

	idst = 0;
	isrc = 0;
	while (dest[idst])
		idst++;
	while (src[isrc] && isrc < n)
	{
		dest[idst] = src[isrc];
		idst++;
		isrc++;
	}
	dest[idst] = '\0';
	return (dest);
}
