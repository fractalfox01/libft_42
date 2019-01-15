int	ft_isprint(unsigned char str)
{
	if (str > 31 && str < 128)
		return (1);
	return (0);
}
