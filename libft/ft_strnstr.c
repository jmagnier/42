char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	int k;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		k = i;
		if (haystack[k] == needle[j] && haystack[k] && needle[j])
		{
			while (haystack[k] == needle[j] && haystack[k] && needle [j])
			{
				k++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char*)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
