#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*
	The memmove() function copies n bytes from memory area src to memory
	area dest.  The memory areas may overlap: copying takes place as
	though the bytes in src are first copied into a temporary array that
	does not overlap src or dest, and the bytes are then copied from the
	temporary array to dest.

	The memmove() function returns a pointer to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *psrc;
	unsigned char *ps;
	unsigned char *pdest;
	unsigned char *rptr;
	size_t i;

	i = 0;
	psrc = (unsigned char *)malloc(sizeof(unsigned char) * (n));
	pdest = (unsigned char *)malloc(sizeof(unsigned char) * (n));
	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	ps = psrc;
	rptr = pdest;
	while (i < n)
	{
		*psrc = *(unsigned char *)src;
		psrc++;
		(unsigned char *)src++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(unsigned char *)pdest = *ps;
		(unsigned char *)pdest++;
		ps++;
		i++;
	}
	free(ps);
	return (rptr);
}
