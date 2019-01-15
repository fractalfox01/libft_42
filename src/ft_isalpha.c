int	ft_isalpha(int c)
{
	int	ret;

	ret = 0;
	if (c > 64 && c < 91)
		ret = c;
	if (c > 96 && c < 123)
		ret = c;
	return (ret);
}
