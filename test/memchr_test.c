#include <stdio.h>
#include <stdlib.h>
#include "../include/libft.h"

int	main(void)
{
	char str1[60] = "function scans the initial n bytes of the memory area";
	char str2[60] = "pointed to by s for the first instance of c.";
	char str3[60] = "Both c and the bytes of the memory area pointed to";
	char str4[60] = "by s are interpreted as unsigned char.";

	char *ptr1;
	char *ptr2;
	char *ptr3;
	char *ptr4;
	char *ptr5;
	char *ptr6;
	char *ptr7;
	char *ptr8;
	char *tptr1;
	char *tptr2;
	char *tptr3;
	char *tptr4;
	char *tptr5;
	char *tptr6;
	char *tptr7;
	char *tptr8;

	ptr1 = malloc(sizeof(char) * 42);
	ptr2 = malloc(sizeof(char) * 42);
	ptr3 = malloc(sizeof(char) * 42);
	ptr4 = malloc(sizeof(char) * 42);
	ptr5 = malloc(sizeof(char) * 42);
	ptr6 = malloc(sizeof(char) * 42);
	ptr7 = malloc(sizeof(char) * 42);
	ptr8 = malloc(sizeof(char) * 42);
	tptr1 = malloc(sizeof(char) * 42);
	tptr2 = malloc(sizeof(char) * 42);
	tptr3 = malloc(sizeof(char) * 42);
	tptr4 = malloc(sizeof(char) * 42);
	tptr5 = malloc(sizeof(char) * 42);
	tptr6 = malloc(sizeof(char) * 42);
	tptr7 = malloc(sizeof(char) * 42);
	tptr8 = malloc(sizeof(char) * 42);
	
	ptr1 = ft_memchr(str1, 'c', 42);
	ptr2 = ft_memchr(str2, 'c', 42);
	ptr3 = ft_memchr(str3, 'c', 42);
	ptr4 = ft_memchr(str4, 'c', 42);
	ptr5 = ft_memchr(str1, 'B', 42);
	ptr6 = ft_memchr(str2, 'B', 42);
	ptr7 = ft_memchr(str3, 'B', 42);
	ptr8 = ft_memchr(str4, 'B', 42);
	tptr1 = memchr(str1, 'c', 42);
	tptr2 = memchr(str2, 'c', 42);
	tptr3 = memchr(str3, 'c', 42);
	tptr4 = memchr(str4, 'c', 42);
	tptr5 = memchr(str1, 'B', 42);
	tptr6 = memchr(str2, 'B', 42);
	tptr7 = memchr(str3, 'B', 42);
	tptr8 = memchr(str4, 'B', 42);
	
	printf("Original:\t%s\nMine:\t%s\nTheirs: %s\n\n", str1, ptr1, tptr1);
	printf("Original:\t%s\nMine:\t%s\nTheirs: %s\n\n", str2, ptr2, tptr2);
	printf("Original:\t%s\nMine:\t%s\nTheirs: %s\n\n", str3, ptr3, tptr3);
	printf("Original:\t%s\nMine:\t%s\nTheirs: %s\n\n", str4, ptr4, tptr4);
	printf("Original:\t%s\nMine:\t%s\nTheirs: %s\n\n", str1, ptr5, tptr5);
	printf("Original:\t%s\nMine:\t%s\nTheirs: %s\n\n", str2, ptr6, tptr6);
	printf("Original:\t%s\nMine:\t%s\nTheirs: %s\n\n", str3, ptr7, tptr7);
	printf("Original:\t%s\nMine:\t%s\nTheirs: %s\n\n", str4, ptr8, tptr8);
	return (0);
}
