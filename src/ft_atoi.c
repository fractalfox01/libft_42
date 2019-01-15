int	ft_atoi(char *str)
{
	int	nbr;
	int	dir;

	nbr = 0;
	dir = 1;
	while (*str == '\t' || *str == '\n' || *str == ' ' || *str == '\r')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			dir *= -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		nbr = nbr * 10 + (*str - 48);
		str++;
	}
	return (nbr * dir);
}
