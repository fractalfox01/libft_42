#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/libft.h"

// SEGFAULT in program somewhere.

int     main(void)
{
        const int src[11] = {255, 65535, 333333333, -545, +556, 767, 788, 989, -90001, 101};
        int *dest;
        int *arr;

        const char strsrc[22] = "A Simple Test String.";
        char *strdest;
        char *str;

        const unsigned char strsrc2[22] = "B Simple Test String.";
        char *strdest2;
        char *str2;

        size_t i = 0;
        size_t c = 11;
        dest = (int *)malloc(sizeof(int) * c);
        strdest = (char *)malloc(sizeof(char) * 12);
        arr = ft_memmove(dest, src, sizeof(src));
        str = ft_memmove(strdest, strsrc, sizeof(strsrc) * 2);
        strdest2 = (char *)malloc(sizeof(unsigned char) * 22);
        str2 = ft_memmove(strdest2, strsrc2, sizeof(strsrc2));
	printf("Input Int array: { 255, 65535, 333333333, -545, +556, 767, 788, 989, -90001, 101 }\n");
	printf("Returned Int array Pointer: ");
        while (i < c)
        {
                printf("%d ", arr[i]);
                i++;
        }
	printf("\n");
        i = 0;
        printf("Returned str pointer: %s\n", str);
        printf("Returned str2 pointer: %s\n", str2);
        free(dest);
        free(str);
        free(str2);
        return (0);
}
