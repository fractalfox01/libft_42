#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int nbr1;
	int nbr2;
	size_t i;
	
	i = 0;
	nbr1 = 0;
	nbr2 = 0;
	while (i < n)
	{
		printf("*s1 %d, *s2 %d\n", *(char *)s1, *(char *)s2);
		nbr1 += (*(char *)s1);
		nbr2 += (*(char *)s2);
		(char *)s1++;
		(char *)s2++;
		i++;
	}
	return (nbr1 - nbr2);
}
