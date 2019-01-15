#include <stdlib.h>
#include <stdio.h>
#include "../include/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	char *vptr;

	i = 0;
	vptr = (char *)malloc(sizeof(char) * n);
	while (i < n)
	{
		*(char*)dest = *(char*)src;
		if (*(char*)dest == c)
		{
			dest++;
			i++;
			break;
		}
		dest++;
		src++;
		i++;
	}
	*(char*)dest = '\0';
	if (i == n && *(char*)src != c)
	{
		return (NULL);
	}
	vptr = (char *)dest;
	return (vptr);
}
