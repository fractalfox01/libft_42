#include <string.h>
#include <stdio.h>
#include "../include/libft.h"

int	main(void)
{
	char str1[9] = "atoms\0\0\0";
	char str2[9] = "atoms\0a\0";
	char str3[5] = "\v\r\n\t";
	char str4[5] = "    ";
	char str5[60] = "The strcmp() function compares the two strings s1 and s2.";
	char str6[90] = "It returns an integer less than, equal to, or greater than zero if s1 is found";
	char str7[60] = "The strcmp() function compares the two strings s1 and s2.";
	char str8[90] = "It returns in integer less than, equal to, or greater than zero if s1 is found";
	char str9[7] = "atttom";
	char str10[7] = "aaatom";
	char str11[3] = " k";
	char str12[3] = " b";
	char str13[5] = "aaaa";
	char str14[5] = "    ";
	char str15[9] = "kkkk    ";
	char str16[9] = "        ";

	printf("\"atoms\\0\\0\\0\" vs \"atoms\\0a\\0\"\n");
	printf("Mine: %d\n", ft_strcmp(str1, str2));
	printf("Their's: %d\n", strcmp(str1, str2));

	printf("\n\"\\v\\r\\n\\t\" vs \"%s\"\n", str4);
	printf("Mine: %d\n", ft_strcmp(str3, str4));
	printf("Their's: %d\n", strcmp(str3, str4));

	printf("\n\"%s\" vs \"%s\"\n", str5, str7);
	printf("Mine: %d\n", ft_strcmp(str5, str7));
	printf("Their's: %d\n", strcmp(str5, str7));

	printf("\n\"%s\" vs \"%s\"\n", str6, str8);
	printf("Mine: %d\n", ft_strcmp(str6, str8));
	printf("Their's: %d\n", strcmp(str6, str8));

	printf("\n\"%s\" vs \"%s\"\n", str9, str10);
	printf("Mine: %d\n", ft_strcmp(str9, str10));
	printf("Their's: %d\n", strcmp(str9, str10));

	printf("\n\"%s\" vs \"%s\"\n", str11, str12);
	printf("Mine: %d\n", ft_strcmp(str11, str12));
	printf("Their's: %d\n", strcmp(str11, str12));

	printf("\n\"%s\" vs \"%s\"\n", str13, str14);
	printf("Mine: %d\n", ft_strcmp(str13, str14));
	printf("Their's: %d\n", strcmp(str13, str14));

	printf("\n\"%s\" vs \"%s\"\n", str15, str16);
	printf("Mine: %d\n", ft_strcmp(str15, str16));
	printf("Their's: %d\n", strcmp(str15, str16));

	return (0);
}
