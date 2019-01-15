int	ft_toupper(int nb)
{
	int nbr;

	nbr = 0;
	if (nb > 96 && nb < 123)
		nbr = nb - 32;
	else
		nbr = nb;
	return (nbr);
}
