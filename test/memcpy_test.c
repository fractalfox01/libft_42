#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

/*
	The memcpy() function copies n bytes from memory area src to memory
	area dest.  The memory areas must not overlap.  Use memmove(3) if the
	memory areas do overlap.
*/

int	main(void)
{
	long int	src1[10] = {45535, 13, 15, 17, 19, 21, 23, -2555555};
	long int	*dest1;
	long int	*tab1;
	char		src2[10][10] = {"All","Words","Less","Then","Ten","Bytes","In","Length"};
	char		dest2[10][10];
	char		tab2[10][10];
	int i = 0;
	dest1 = (long int *)malloc(sizeof(long int) * 10);
//	dest2 = (char *)malloc(sizeof(char) * sizeof(src2));

	tab1 = (long int *)malloc(sizeof(long int) * 10);
	tab1 = ft_memcpy(dest1, src1, (sizeof(src1)));
	while (*tab1)
	{
		printf("%ld\n", *tab1);
		tab1++;
	}
	printf("\n");
//	tab2 = (char *)malloc(sizeof(char) * sizeof(src2));
	tab2 = ft_memcpy(dest2, src2, (sizeof(src2)));
	while (tab2[i])
	{
		printf("%s\n", tab2[i][0]);
		
		i++;
	}
	return (0);
}
