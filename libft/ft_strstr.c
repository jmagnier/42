char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;
	
	i = 0;
	while (haystack[i])
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
