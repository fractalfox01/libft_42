#include <stdio.h>
#include "../include/libft.h"

int	main(void)
{
	char str1[60] = "In C, char values are stored in 1 byte, and are ";
	char str2[60] = "encoded as numbers using the ASCII encoding.";
	char str3[60] = "for(ch = 'a'; ch < 'z'; ch++) { ...";
	char str4[60] = "// ' ', '\t', '\n', '\r', '\f', or '\v'";

	ft_putstr(str1);
	printf("\n");
	ft_putstr(str2);
	printf("\n");
	ft_putstr(str3);
	printf("\n");
	ft_putstr(str4);
	printf("\n");
	return (0);
}
