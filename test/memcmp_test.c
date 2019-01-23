#include <stdio.h>
#include <string.h>
#include "../include/libft.h"

int	main(void)
{
	char str1[50] = "The memcmp() function compares the first n bytes";
	char str2[70] = "(each interpreted as unsigned char) of the memory areas s1 and s2.";
	char str3[50] = "The memcmp() function compares the first n bytes";
	char str4[70] = "(each interpreted is unsigned char) of the memory areas s1 and s2.";
	char str5[7] = "atttom";
	char str6[7] = "aaatom";
	char str7[3] = " k";
	char str8[3] = "";
	char str9[5] = "aaaa";
	char str10[5] = "    ";
	char str11[4] = "   ";
	char str12[4] = "";

	printf("Mine: %d\n", ft_memcmp(str1, str3, 30));
	printf("There's: %d\n", memcmp(str1, str3, 30));
	printf("Mine: %d\n", ft_memcmp(str2, str4, 40));
	printf("There's: %d\n", memcmp(str2, str4, 40));
	printf("\"%s\" against \"%s\"\n", str6, str5);
	printf("Mine: %d\n", ft_memcmp(str5, str6, 6));
	printf("There's: %d\n", memcmp(str5, str6, 6));
	printf("\nEmtpy against \"%s\"\n", str7);
	printf("Mine: %d\n", ft_memcmp(str7, str8, 2));
	printf("There's: %d\n", memcmp(str7, str8, 2));
	printf("\n\"    \" against \"%s\"\n", str9);
	printf("Mine: %d\n", ft_memcmp(str9, str10, 4));
	printf("There's: %d\n", memcmp(str9, str10, 4));
	printf("\nEmtpy against \"%s\"\n", str11);
	printf("Mine: %d\n", ft_memcmp(str11, str12, 3));
	printf("There's: %d\n", memcmp(str11, str12, 3));
	return (0);
}
