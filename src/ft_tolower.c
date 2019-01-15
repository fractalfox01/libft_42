int	ft_tolower(int nb)
{
	int nbr;

	nbr = 0;
	if (nb > 64 && nb < 91)
		nbr = nb + 32;
	else
		nbr = nb;
	return (nbr);
}
