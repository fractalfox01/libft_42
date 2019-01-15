#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const void *ptr;
	
	while (*(char *)str != '\0' && *(char *)str != c)
	{
		str++;
		n++;
	}
	if (*(char *)str == c)
		ptr = (void *)str;
	else
		ptr = NULL;
	return ((unsigned char *)ptr);
}
