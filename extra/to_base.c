#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

void    to_base(int nbr, int base)
{
        if (base == 0)
        {
                return ;
        }
        if ((nbr / base) > 0)
        {
                to_base((nbr / base), base);
        }
	if ((nbr % base) > 9 && (nbr % base) < 36)
	{
		ft_putchar((nbr % base) + 55);
	}
	else if ((nbr % base) > 35 && (nbr % base) < 64)
	{
		ft_putchar((nbr % base) + 61);
	}
	else
	{
        	ft_putchar((nbr % base) + 48);
	}
}

int	ft_atoi(char *str)
{
	int fin;

	fin = 0;
	while (*str != '\0')
	{
		fin = fin * 10 + (*str++ - 48);
	}
	return (fin);
}

int     main(int argc, char **argv)
{
	if (argc == 1)
	{
		to_base(52600, 32);
	}
	if (argc == 3)
	{
		to_base(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	ft_putchar('\n');
        return (0);
}

