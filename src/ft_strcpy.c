char	*ft_strcpy(char *dest, char *src)
{
	int i;
	void *ptr;
	ptr = dest;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ptr);
}
