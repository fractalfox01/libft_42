char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = &dest[0];
	while (*dest)
	{
		dest++;
	}
	dest--;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
