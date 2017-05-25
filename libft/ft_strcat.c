char	*ft_strcat(char *dest,const char *src)
{
	int idst;
	int isrc;

	idst = 0;
	isrc = 0;
	while (dest[idst])
		idst++;
	while (src[isrc])
	{
		dest[idst] = src[isrc];
		idst++;
		isrc++;
	}
	dest[idst] = '\0';
	return (dest);
}
