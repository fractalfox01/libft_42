int	ft_isascii(int c)
{
	unsigned char	i;

	i = c;
	if (i > 0x7f)
	{
		return (0);
	}
	return (1);
}
