#include <string.h>
#include <stdio.h>
#include "../include/libft.h"

int	main(int argc, char **argv)
{
	int i = 0;
	char str1[9] = "atoms\0\0\0";
	char str2[9] = "atoms\0a\0";
	char str3[5] = "\v\r\n\t";
	char str4[5] = "    ";
	char str5[60] = "The strncmp() function compares the two strings s1 and s2.";
	char str6[90] = "It returns an integer less than, equal to, or greater than zero if s1 is found";
	char str7[60] = "The strncmp() function compares the two strings s1 and s2.";
	char str8[90] = "It returns in integer less than, equal to, or greater than zero if s1 is found";
	char str9[7] = "atttom";
	char str10[7] = "aaatom";
	char str11[3] = " k";
	char str12[3] = " b";
	char str13[5] = "AAAA";
	char str14[5] = "    ";
	char str15[9] = "KKKK    ";
	char str16[9] = "        ";

	size_t n = sizeof(str1) - 1;

	printf("Size used for all test: %ld\n", n);
	if (argc == 1)
	{
		if (ft_strncmp(str1, str2, n) == strncmp(str1, str2, n))
		{
			i++;
			if (ft_strncmp(str3, str4, n) == strncmp(str3, str4, n))
			{
				i++;
				if (ft_strncmp(str5, str7, n) == strncmp(str5, str7, n))
				{
					i++;
					if (ft_strncmp(str6, str8, n) == strncmp(str6, str8, n))
					{
						i++;
						if (ft_strncmp(str9, str10, n) == strncmp(str9, str10, n))
						{
							i++;
							if (ft_strncmp(str11, str12, n) == strncmp(str11, str12, n))
							{
								i++;
								if (ft_strncmp(str13, str14, n) == strncmp(str13, str14, n))
								{
									i++;
									if (ft_strncmp(str15, str16, n) == strncmp(str15, str16, n))
									{
										printf("All tests pass\n");
									}
								}
							}
						}
					}
				}
			}
		}
		if (i < 7)
		{
			printf("Failed at test #%d\n", (i + 1));
		}
	}
	if (argc > 1)
	{
		if (strcmp(argv[1], "-v") == 0)
		{
			printf("\"atoms\\0\\0\\0\" vs \"atoms\\0a\\0\"\n");
			printf("Mine: %d\n", ft_strncmp(str1, str2, n));
			printf("Their's: %d\n", strncmp(str1, str2, n));

			printf("\n\"\\v\\r\\n\\t\" vs \"%s\"\n", str4);
			printf("Mine: %d\n", ft_strncmp(str3, str4, n));
			printf("Their's: %d\n", strncmp(str3, str4, n));

			printf("\n\"%s\" vs \"%s\"\n", str5, str7);
			printf("Mine: %d\n", ft_strncmp(str5, str7, n));
			printf("Their's: %d\n", strncmp(str5, str7, n));

			printf("\n\"%s\" vs \"%s\"\n", str6, str8);
			printf("Mine: %d\n", ft_strncmp(str6, str8, n));
			printf("Their's: %d\n", strncmp(str6, str8, n));

			printf("\n\"%s\" vs \"%s\"\n", str9, str10);
			printf("Mine: %d\n", ft_strncmp(str9, str10, n));
			printf("Their's: %d\n", strncmp(str9, str10, n));

			printf("\n\"%s\" vs \"%s\"\n", str11, str12);
			printf("Mine: %d\n", ft_strncmp(str11, str12, n));
			printf("Their's: %d\n", strncmp(str11, str12, n));

			printf("\n\"%s\" vs \"%s\"\n", str13, str14);
			printf("Mine: %d\n", ft_strncmp(str13, str14, n));
			printf("Their's: %d\n", strncmp(str13, str14, n));

			printf("\n\"%s\" vs \"%s\"\n", str15, str16);
			printf("Mine: %d\n", ft_strncmp(str15, str16, n));
			printf("Their's: %d\n", strncmp(str15, str16, n));
		}
		else
			printf("Bad option.\n");
	}
	return (0);
}
