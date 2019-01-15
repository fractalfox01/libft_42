void ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if ((nb / 10) > 0)
	{
		ft_putnbr((nb / 10));
	}
	ft_putchar((nb % 10) + 48);
}
