#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

int	main(void)
{	
	char str1[60] = "function copies no more than n bytes";
	char str2[60] = "from memory area src to memory area dest,";
	char str3[60] = " stopping when the character c is found.";
	char buf1[61];
	char buf2[61];
	char buf3[61];
	char buf4[61];
	char buf5[61];
	char buf6[61];
	char *sptr1;
	char *ssptr1;
	char *sptr2;
	char *ssptr2;
	char *sptr3;
	char *ssptr3;

	printf("Original: %s\n", str1);
	sptr1 = ft_memccpy(buf1, str1, 'c', 55);
	ssptr1 = memccpy(buf2, str1, 'c', 55);
	printf("Destination Mine\t%s\nDestination Theirs\t%s\n", buf1, buf2);
	printf("Return mine\t%s\nReturn theirs\t%s\n", sptr1, ssptr1);

	printf("Original: %s\n", str2);
	sptr2 = ft_memccpy(buf3, str2, 'B', 42);
	ssptr2 = memccpy(buf4, str2, 'B', 42);
	printf("Destination Mine\t%s\nDestination Theirs\t%s\n", buf3, buf4);
	printf("Return mine\t%s\nReturn theirs\t%s\n", sptr2, ssptr2);

	printf("Original: %s\n", str3);
	sptr3 = ft_memccpy(buf5, str3, 'c', 55);
	ssptr3 = memccpy(buf6, str3, 'c', 55);
	printf("Destination Mine\t%s\nDestination Theirs\t%s\n", buf5, buf6);
	printf("Return mine\t%s\nReturn theirs\t%s\n", sptr3, ssptr3);

	return (0);
}
