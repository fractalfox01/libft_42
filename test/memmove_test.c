#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/libft.h"

// SEGFAULT in program somewhere.

int     main(void)
{
	char tmp[22] = "g Simple Test gtring.";
        const char strsrc[22] = "A Simple Test String.";
        char *strdest;
        char *str;

        const unsigned char strsrc2[22] = "B Simple Best String.";
        char *str2;

        strdest = (char *)malloc(sizeof(char) * sizeof(strsrc));

        printf("Original tmp: %s\nOriginal strsrc: %s\nOriginal strsrc2: %s\nstrdest is malloc'd sizeof(strsrc) = 22\n\n", tmp, strsrc, strsrc2);
        str = ft_memmove(strdest, strsrc, (size_t)8);
        str2 = ft_memmove(tmp, strsrc2, (size_t)8);
	printf("strdest is dest && strsrc is src. n is 8\noutput: %s\n\n", str);
        printf("tmp as dest && strsrc2 as src. n is 8\noutput: %s\n", str2);
        return (0);
}
