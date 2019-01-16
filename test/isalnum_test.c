#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "../include/libft.h"

void	test(char *str)
{
	int a = ft_strlen(str);
	int i = 0;
	int j = 0;
	while (i < a)
	{
		if (ft_isalnum(str[i]))
			j++;
		i++;
	}
	if (j == a)
		ft_putstr("str is alphanumeric.\n");
	else
		ft_putstr("str did not pass muster.\n");
	i = 0;
	j = 0;
	while (i < a)
	{
		if (isalnum(str[i]))
			j++;
		i++;
	}
	if (j == a)
		ft_putstr("str is alphanumeric.\n");
	else
		ft_putstr("str did not pass muster.\n");
}

int	main(int argc, char **argv)
{
	char str1[70] = "The isalphanum() function returns a non-zero integer if an argument";
	char str2[90] = "(character) passed to the function is an alphanumeric (alphabet and number) character.";
	char str3[20] = "\v\n\t\r";
	char str4[20] = "\0\0\0\0\0\0\0";
	char str5[5] = "0xFF";
	char str6[5] = "\u0123";
	char str7[5] = "NUL";
	char str8[5] = "NULL";
	int i = 1;

	if (argc == 1)
	{
		printf("Original: %s\n", str1);
		test(str1);
		printf("\nOriginal: %s\n\n", str2);
		test(str2);
		printf("\nOriginal: \\v\\n\\t\\r\n\n");
		test(str3);
		printf("\nOriginal: \\0\\0\\0\\0\\0\\0\\0\n\n");
		test(str4);
		printf("\nOriginal: %s\n\n", str5);
		test(str5);
		printf("\nOriginal: \\u0123\n\n");
		test(str6);
		printf("\nOriginal: %s\n\n", str7);
		test(str7);
		printf("\nOriginal: %s\n\n", str8);
		test(str8);
	}
	else
	{
		while (i < argc)
		{
			test(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
