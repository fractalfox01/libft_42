#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/libft.h"
/*
	The memmove() function copies n bytes from memory area src to memory
	area dest.  The memory areas may overlap: copying takes place as
	though the bytes in src are first copied into a temporary array that
	does not overlap src or dest, and the bytes are then copied from the
	temporary array to dest.

	The memmove() function returns a pointer to dest.
*/

void	*mmcopy(const void *str, size_t n)
{
	char	*vptr;
	char	*ptr;
	size_t len = 0;
	vptr = (char *)malloc(sizeof(char) * (n + 1));
	ptr = vptr;
	while (len < n)
	{
		vptr[len] = *(char *)str;
		(char *)str++;
		len++;
	}
//	vptr[len] = '\0';
	return (ptr);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *pdest;
	char *rptr;
	char *vptr;
	size_t i;

	i = 0;
	vptr = mmcopy(src, n);
//	ft_putstr("test output: ");
//	while (i < n)
//	{
//		ft_putchar(vptr[i]);
//		ft_putchar(',');
//		i++;
//	}
//	ft_putchar('\n');
//	pdest = (char *)malloc(sizeof(char) * (n));
	pdest = (char *)dest;
	rptr = pdest;
	while (i < n)
	{
		*(char *)dest = *(char *)vptr;
		(char *)vptr++;
		(char *)dest++;
		i++;
	}
//	*(char *)dest = '\0';
	return (rptr);
}
