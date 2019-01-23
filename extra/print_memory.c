#include <unistd.h>
#include <fcntl.h>
#include "../include/libft.h"

void	putprint(unsigned char *nbr, int end)
{
	int i = 0;
	while (i < (32 - (end * 2)))
	{
		if (i % 8 == 0)
			ft_putstr("          ");
		i++;
	}
	i = 0;
	while (i < end)
	{
		if (*nbr < 127 && *nbr > 31)
		{
			ft_putchar(*nbr);
		}
		else
			ft_putchar('.');
		nbr++;
		i++;
	}
}

void	alt_hex(unsigned char *nbr)
{
	int a = 0;
	int i = 7;
	long int nb = *nbr;
	char rev[9] = "00000000";
	char tmp[9] = "00000000";
	char hex[16] = "0123456789abcdef";
	while (i >= 0)
	{
		tmp[i] = hex[(nb % 16)];
		i--;
		nb /= 16;
		tmp[i] = hex[(nb % 16)];
		i--;
		nb /= 16;
		nbr++;
		nb = *nbr;
	}
	i = 0;
	while (a < 8 && i < 8)
	{
		if (tmp[i] == '0' && tmp[i + 1] == '0')
			i += 2;
		else
		{		
			rev[a++] = tmp[i++];
			rev[a++] = tmp[i++];
		}
	}
	while (a < 8)
		rev[a++] = '0';
	i = 0;
	while (i < 8)
	{
		ft_putchar(rev[i]);
		if (i == 3 || i == 7)
			ft_putchar(' ');
		i++;
	}
}

void	print_memory(const void *addr, size_t size)
{
	size_t		i;
	int		a;
	size_t		b;
	unsigned char	*tmp;
	unsigned char	*nptr;

	i = 0;
	a = 0;
	b = 0;
	tmp = (unsigned char *)addr;
	nptr = (unsigned char *)addr;
	while (i < size)
	{
		if ((i % 16) == 0)
		{
			if (i == 0)
				tmp = nptr;
			else
			{
				putprint(tmp, 16);
				ft_putchar('\n');
				tmp = nptr;
			}
		}
		if (i % 4 == 0)
		{
			b += 4;
			alt_hex(nptr);
		}
		while (a < 4)
		{
			nptr++;
			a++;
		}
		a = 0;
		i += 4;
	}
	putprint(tmp, b % 16);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int		tab1[10] = {0, 42, 125, 12, 45, 78, 101, 255};
	char		tab2[5][35] = {"Sentence A test", "Sentence B test", "Sentence C test", "Sentence D test", "Sentence E test"};
	char		str1[4] = "   ";
	static char	*buf;
	int		fd;
	int		i;

	i = 0;
	if (argc == 1)
	{
		print_memory(tab1, sizeof(tab1));
		ft_putstr("\n\n");
		print_memory(*tab2, sizeof(tab2));
		ft_putchar('\n');
		print_memory(str1, 35);
	}
	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		ft_putstr("\n");
		while (i < 7)
		{
			buf = (char *)malloc(sizeof(char *) * 512);
			read(fd, buf, 256);
			print_memory(buf, (size_t)256);
			read(fd, buf, 256);
			print_memory(buf, (size_t)256);
			i++;
		}
	}
	return (0);
}
