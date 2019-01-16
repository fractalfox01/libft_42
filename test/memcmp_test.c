#include <stdio.h>
#include "../include/libft.h"

int	main(void)
{
	char str1[50] = "The memcmp() function compares the first n bytes";
	char str2[70] = "(each interpreted as unsigned char) of the memory areas s1 and s2.";
	char str3[50] = "The memcmp() function compares the first n bytes";
	char str4[70] = "(each interpreted is unsigned char) of the memory areas s1 and s2.";

	printf("%d\n", ft_memcmp(str1, str3, 30));
	printf("%d\n", ft_memcmp(str2, str4, 40));
	return (0);
}
