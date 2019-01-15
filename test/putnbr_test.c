#include <stdio.h>
#include "../include/libft.h"

int	main(void)
{
	int a = 42;
	int i = 0;
	int nbr_arr[9] = {0, 23, -340, 45, +5060, 67, -7778, 89, 65535};
	char *null_nbr[4] = { NULL };
	char str[20] = "String testing\n\v\r\t\\";

	printf("Testing a single Integer: 42\n\t");
	ft_putnbr(a);
	printf("\n\nTesting an array of nine Integers: {0, 23, -340, 45, +5060, 67, -7778, 89, 65535}\n");
	while (i < 9)
	{
		ft_putnbr(nbr_arr[i]);
		printf("\n");
		i++;
	}
	i = 0;
	printf("\nTesting a character pointer array of NULL\n");
	while (i < 4)
	{
		ft_putnbr((long int)null_nbr[i]);
		printf("\n");
		i++;
	}
	i = 0;
	printf("\nTesting a string: \"String testing\\n\\v\\r\\t\\\"\n");
	while (i < 19)
	{
		ft_putnbr((long int)str[i]);
		printf("\n");
		i++;
	}
	printf("\n");
	return (0);
}
