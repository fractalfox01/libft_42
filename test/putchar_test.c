#include <stdio.h>
#include "../include/libft.h"

int	main(void)
{
	int i = 0;
	int j = 0;
	char str1[45] = "The C library function int putchar(int char)";
	char str2[38] = "writes a character (an unsigned char)";
	char str3[43] = "specified by the argument char to stdout.";
	char str4[97] = "This function returns the character written as an unsigned char cast to an int or EOF on error.";
	int iarr[10] = { 42, 187, 204, 221, 238, 255, 171, 172, 173, 174 };

	while (i < (int)strlen(str1))
	{
		ft_putchar(str1[i]);
		i++;
	}
	printf("\n");
	while (j < (int)strlen(str1))
	{
		putchar(str1[j]);
		j++;
	}
	i = 0;
	j = 0;
	printf("\n\n");
	while (i < (int)strlen(str2))
	{
		ft_putchar(str2[i]);
		i++;
	}
	printf("\n");
	while (j < (int)strlen(str2))
	{
		putchar(str2[j]);
		j++;
	}
	i = 0;
	j = 0;
	printf("\n\n");
	while (i < (int)strlen(str3))
	{
		ft_putchar(str3[i]);
		i++;
	}
	printf("\n");
	while (j < (int)strlen(str3))
	{
		putchar(str3[j]);
		j++;
	}
	i = 0;
	j = 0;
	printf("\n\n");
	while (i < (int)strlen(str4))
	{
		ft_putchar(str4[i]);
		i++;
	}
	printf("\n");
	while (j < (int)strlen(str4))
	{
		putchar(str4[j]);
		j++;
	}
	printf("\n\n");
	i = 0;
	j = 0;
	while ( i < 10)
	{
		ft_putchar(iarr[i]);
		i++;
	}
	printf("\n");
	while (j < 10)
	{
		putchar(iarr[j]);
		j++;
	}
	printf("\n");
	return (0);
}
