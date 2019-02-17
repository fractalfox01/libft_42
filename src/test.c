#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/libft.h"

int	main(void)
{
//	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
//	char buff[0xF0];

	char *src = "--> nyancat <--\n\r";
	char dst1[30];
	size_t max = 12;

//	char *ret = ft_memmove(buff, src, 100);
//	printf("%s\n", ret);
	printf("output: |%s\n|", ft_strncpy(dst1, src, max));	
	return (0);
}
