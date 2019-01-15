#include <stdio.h>
#include <string.h>
#include "../include/libft.h"

int	main(void)
{
	char str[50];

	strcpy(str, "This is string.h library function");
	printf("%s\n", str);

	ft_memset(str, '$', 7);
	printf("%s\n", str);

	return (0);
}
