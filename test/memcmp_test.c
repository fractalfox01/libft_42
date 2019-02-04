#include <stdio.h>
#include <string.h>
#include "../include/libft.h"

int	main(void)
{
	const char str1[50] = "The memcmp() function compares the first n bytes";
	const char str2[70] = "(each interpreted as unsigned char) of the memory areas s1 and s2.";
	const char str3[50] = "The memcmp() function compares the first n bytes";
	const char str4[70] = "(each interpreted is unsigned char) of the memory areas s1 and s2.";
	const char str5[7] = "atttom";
	const char str6[7] = "aaatom";
	const char str7[10][10] = {"Hello","World","Hows","every","thing","going","for","ya"};
	const char str8[10][10] = {"Hello","World","Hows","Every","thing","going","for","ya"};
	const char str9[5] = "aaaa";
	const char str10[5] = "    ";
	const char str11[4] = "   ";
	const char str12[4] = "";

	printf("Mine: %d\n", ft_memcmp(str1, str3, sizeof(str1) - 5));
	printf("There's: %d\n", memcmp(str1, str3, sizeof(str1) - 5));
	printf("Mine: %d\n", ft_memcmp(str2, str4, sizeof(str2) - 5));
	printf("There's: %d\n", memcmp(str2, str4, sizeof(str2) - 5));
	printf("\"%s\" against \"%s\"\n", str6, str5);
	printf("Mine: %d\n", ft_memcmp(str5, str6, sizeof(str5) - 1));
	printf("There's: %d\n", memcmp(str5, str6, sizeof(str5) - 1));
//	printf("\nEmtpy against \"%s\"\n", str7);
	printf("Mine: %d\n", ft_memcmp(str7, str8, sizeof(str7) - 1));
	printf("There's: %d\n", memcmp(str7, str8, sizeof(str7) - 1));
	printf("\n\"    \" against \"%s\"\n", str9);
	printf("Mine: %d\n", ft_memcmp(str9, str10, sizeof(str9) - 1));
	printf("There's: %d\n", memcmp(str9, str10, sizeof(str9) - 1));
	printf("\nEmtpy against \"%s\"\n", str11);
	printf("Mine: %d\n", ft_memcmp(str11, str12, sizeof(str11) - 1));
	printf("There's: %d\n", memcmp(str11, str12, sizeof(str11) - 1));
	return (0);
}
