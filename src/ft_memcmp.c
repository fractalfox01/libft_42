#include <stdlib.h>
#include <string.h>
#include "../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int nbr1;
	int nbr2;
	size_t i;
	
	i = 0;
	while (i < n)
	{
		nbr1 += *(char*)s1;
		nbr2 += *(char*)s2;
		(char *)s1++;
		(char *)s2++;
		i++;
	}

	ft_putnbr(nbr1);
	ft_putnbr(nbr2);
	return (nbr1);
}
