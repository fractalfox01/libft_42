#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/libft.h"

int     main(void)
{
	int i = 0;
	int arr[10] = {255, 65535, -34, +45, 56, 67, 78, 89, 90, 101};
	int arr2[10] = {102, 91, 90, 79, 68, 57, 46, 35, 65536, 13};
	int *arr3;
	char tmp[22] = "g Simple Test gtring.";
        const char strsrc[22] = "A Simple Test String.";
        char *strdest;
        char *str;

        const unsigned char strsrc2[22] = "B Simple Best String.";
        char *str2;

        strdest = (char *)malloc(sizeof(char) * sizeof(strsrc));
	arr3 = (int *)malloc(sizeof(int) * 10);

        printf("Original tmp: %s\nOriginal strsrc: %s\nOriginal strsrc2: %s\nstrdest is malloc'd sizeof(strsrc) = 22\n\n", tmp, strsrc, strsrc2);
        str = ft_memmove(strdest, strsrc, (size_t)8);
        str2 = ft_memmove(tmp, strsrc2, (size_t)8);
	printf("strdest is dest && strsrc is src. n is 8\noutput: %s\n\n", str);
        printf("tmp as dest && strsrc2 as src. n is 8\noutput: %s\n", str2);

	printf("\ntrying with array of 10 integers.\n");
	arr3 = ft_memmove(arr2, arr, (size_t)(sizeof(arr)/2));
	while (i < 10)
	{
		printf("%d\n", arr3[i]);
		i++;
	}
        return (0);
}
