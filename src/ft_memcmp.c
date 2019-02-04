#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*uc1;
	unsigned char	*uc2;
	int		ans;
	
	ans = 0;
//	uc1 = (unsigned char *)malloc(sizeof(unsigned char) * n);
//	uc2 = (unsigned char *)malloc(sizeof(unsigned char) * n);
	uc1 = (unsigned char *)s1;
	uc2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*uc1 == *uc2)
		{
			ans = *uc1 - *uc2;	
		}
		else
			return (*uc1 - *uc2);
		uc1++;
		uc2++;
		n--;
	}
	return (ans);
}
