#include <stdio.h>

int	strnum(char *str)
{
	long int	nbr;
	int		i;
	nbr = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == str[i + 1] && str[i + 1] != 0)
		{
			nbr += str[i];
			i++;
			while (str[i] == str[i + 1] && str[i + 1] != 0)
				i++;
		}
		nbr += *str;
		str++;
	}
	return (nbr);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	nb1;
	int	nb2;

	nb1 = strnum(s1);
	nb2 = strnum(s2);
	return (nb1 - nb2);
}
